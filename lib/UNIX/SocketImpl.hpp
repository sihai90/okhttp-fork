//
// Created by good-pudge on 01.11.17.
//

#ifndef OKHTTPFORK_SOCKETIMPL_H
#define OKHTTPFORK_SOCKETIMPL_H

#include <ohf/Socket.hpp>
#include <ohf/Config.hpp>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string>

namespace ohf {
    class SocketImpl {
    public:
        typedef socklen_t SocketLength;

        static sockaddr_in createAddress(Uint32 address, Uint16 port);

        static void close(int sock);

        static std::string getError();

        static void setBlocking(int sock, bool blocking);

        static Socket::Handle invalidSocket();
    };
}

#endif //OKHTTPFORK_SOCKETIMPL_H
