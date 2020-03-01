//
// Created by Łukasz Binkiewicz on 01/03/2020.
//

#ifndef LOGGER_LIB_NETWORKLOGGER_H
#define LOGGER_LIB_NETWORKLOGGER_H

#define  DEFAULT_PORT 8080
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#include "Logger.h"

class NetworkLogger : public Logger {
private:
    int port;
    std::string ipAddress;

};


#endif //LOGGER_LIB_NETWORKLOGGER_H
