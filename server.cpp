#include <muduo/net/TcpServer.h>

#include <muduo/base/Atomic.h>
#include <muduo/base/Logging.h>
#include <muduo/base/Thread.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>

#include <boost/bind.hpp>

#include <utility>

#include <stdio.h>
#include <unistd.h>
#include <iostream>

#include <djiosdk/dji_vehicle.hpp>

#include <common/dji_linux_helpers.hpp>

#include <proto/message_strocuture.pb.h>

using namespace muduo;
using namespace muduo::net;

using namespace DJI::OSDK;

Vehicle* vehicle = nullptr;

void onConnection(const TcpConnectionPtr& conn) {
    if (conn->connected()) {
        conn->setTcpNoDelay(true);
    }
}

void onMessage(const TcpConnectionPtr& conn, Buffer* buf, Timestamp timestamp) {
    string message = buf->retrieveAllAsString();
    LOG_INFO << "New message received!";
    BaseMessage baseMessage;
    if (baseMessage.ParseFromArray(message.data(), message.length())) {
        switch (baseMessage.type()) {
            case START_MESSAGE:break;
            case STOP_MESSAGE:break;
            case LOCATION:break;
            case HOTPOINTMISSION:break;
            case TAKEOFFLANDING:
                TakeOffLanding message;
                if (message.ParseFromString(baseMessage.data())) {
                    switch (message.action()) {
                        case TAKE_OFF:
                            LOG_INFO << "Take-off message received!";

                            break;
                        case LAND:
                            LOG_INFO << "Land message received!";
                            vehicle->obtainCtrlAuthority(1);
                            vehicle->control->land();
                            break;
                        default: break;
                    }
                }
                break;
        }
    }
}

int main(int argc, char* argv[]) {
    LinuxSetup linuxEnvironment(argc, argv);
    vehicle = linuxEnvironment.getVehicle();

    LOG_INFO << "pid = " << getpid() << ", tid = " << CurrentThread::tid();
    Logger::setLogLevel(Logger::INFO);

    const string ip = "0.0.0.0";
    const uint16_t port = 9099;
    InetAddress listenAddr(ip, port);
    int threadCount = 1;

    EventLoop loop;

    TcpServer server(&loop, listenAddr, "DroneCommandServer");

    server.setConnectionCallback(onConnection);
    server.setMessageCallback(onMessage);
    server.setThreadNum(threadCount);


    server.start();

    loop.loop();
}