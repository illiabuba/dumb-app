#include <iostream>
#include <Networking/base.hpp>
#include <boost/asio.hpp>

#include <memory.h>

#define DEBUG_ENABLED

#ifdef DEBUG_ENABLED
#define LOG_CONSOLE(str) do { std::cout << str << std::endl; } while( false )
#else
#define LOG_CONSOLE(str) do { } while ( false )
#endif

using boost::asio::ip::tcp;
using boost::system::error_code;


int main(){
   
    try {
    size_t port = 228;
    boost::asio::io_service io_service;
    tcp::acceptor acceptor(io_service, tcp::endpoint(tcp::v4(), port));


    while (true)
    {
        LOG_CONSOLE("Accepting connections\n");

        error_code err;
        tcp::socket socket(io_service);
        acceptor.accept(socket); //puts information to the socket
        std::string messageToClient = "Hello Client\n";
        boost::asio::write(socket, boost::asio::buffer(messageToClient), err);
    }
    
    } catch (std::exception& e)
    {
        std::cerr << "Errors : " << e.what() << '\n';
    }

    return 0;
}