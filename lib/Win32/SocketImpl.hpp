//
// Created by Good_Pudge.
//

#ifndef OKHTTPFORK_SOCKETIMPL_HPP
#define OKHTTPFORK_SOCKETIMPL_HPP

#include <ohf/Socket.hpp>
#include <ohf/Config.hpp>
#include <string>
#include <winsock.h>

namespace ohf {
    class SocketImpl {
    public:
        typedef int SocketLength;

        static sockaddr_in createAddress(Uint32 address, Uint16 port);

        static void close(int sock);

        static std::string getError();

        static void setBlocking(int sock, bool blocking);

        static Socket::Handle invalidSocket();
    };
}

#endif //OKHTTPFORK_SOCKETIMPL_HPP
