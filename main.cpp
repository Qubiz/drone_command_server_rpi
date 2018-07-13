#include <evpp/tcp_server.h>
#include <evpp/buffer.h>
#include <evpp/tcp_conn.h>

using namespace evpp;
using namespace std;

MessageCallback messageCallback = [](const evpp::TCPConnPtr& conn, evpp::Buffer* msg) {
    conn->Send(msg);
};

ConnectionCallback connectionCallback = [](const evpp::TCPConnPtr& conn) {
    if (conn->IsConnected()) {
        LOG_INFO << "A new connection from " << conn->remote_addr();
    } else {
        LOG_INFO << "Lost the connection from " << conn->remote_addr();
    }
};

int main(int argc, char* argv[]) {


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