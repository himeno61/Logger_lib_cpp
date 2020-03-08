//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#ifndef LOGGER_LIB_SOCKETAPPENDER_H
#define LOGGER_LIB_SOCKETAPPENDER_H


#include "BaseAppender.h"

class SocketAppender : public BaseAppender {
public:
    void append(LoggingMessage *message) override;

    std::string getName() override;
};


#endif //LOGGER_LIB_SOCKETAPPENDER_H
