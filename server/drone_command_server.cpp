#include "drone_command_server.hpp"

using namespace evpp;
using namespace std;
using namespace DJI::OSDK;

Vehicle* vehicle = nullptr;

MessageCallback messageCallback = [](const evpp::TCPConnPtr& conn, evpp::Buffer* msg) {
    BaseMessage baseMessage;
    if (baseMessage.ParseFromArray(msg->data(), msg->length())) {
        switch (baseMessage.type()) {
            case START_MESSAGE:break;
            case STOP_MESSAGE:break;
            case LOCATION:break;
            case HOTPOINTMISSION:break;
            case TAKEOFFLANDING:
                TakeOffLanding message;
                if (message.ParseFromString(baseMessage.data())) {
                    LOG_INFO << endl << endl << "New message: " << message.DebugString() << endl << endl;
                    switch (message.action()) {
                        case TAKE_OFF:
                            vehicle->obtainCtrlAuthority();
                            vehicle->control->takeoff();
                            break;
                        case LAND:
                            vehicle->obtainCtrlAuthority();
                            vehicle->control->land();
                            break;
                        default: break;
                    }
                }
                break;
        }
    }
};

ConnectionCallback connectionCallback = [](const evpp::TCPConnPtr& conn) {
    if (conn->IsConnected()) {
        LOG_INFO << "A new connection from " << conn->remote_addr();
    } else {
        LOG_INFO << "Lost the connection from " << conn->remote_addr();
    }
};

int main(int argc, char* argv[]) {
    LinuxSetup linuxEnvironment(argc, argv);
    vehicle = linuxEnvironment.getVehicle();

    string address = "0.0.0.0:9099";

    int thread_num = 4;

    EventLoop loop;
    TCPServer server(&loop, address, "TCPEchoServer", thread_num);

    server.SetMessageCallback(messageCallback);
    server.SetConnectionCallback(connectionCallback);

    server.Init();
    server.Start();

    loop.Run();

    return 0;
}