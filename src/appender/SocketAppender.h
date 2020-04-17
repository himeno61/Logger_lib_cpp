//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#ifndef LOGGER_LIB_SOCKETAPPENDER_H
#define LOGGER_LIB_SOCKETAPPENDER_H


#include <mutex>
#include "BaseAppender.h"

class SocketAppender : public BaseAppender {
private:
    std::string ip;
    int port;

    static std::mutex mtx;
public:
    SocketAppender(const std::string &ip, int port);
    void append(LoggingMessage *message) override;

    std::string getName() override;
};


#endif //LOGGER_LIB_SOCKETAPPENDER_H
