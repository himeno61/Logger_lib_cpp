//
// Created by Łukasz Binkiewicz on 01/03/2020.
//

#ifndef LOGGER_LIB_BASEAPPENDER_H
#define LOGGER_LIB_BASEAPPENDER_H


#include "../LoggingMessage.h"

class BaseAppender {
private:
    std::string name;

public:
    virtual void append(LoggingMessage message) = 0;

    virtual std::string getName() = 0;

    BaseAppender() {}
};


#endif //LOGGER_LIB_BASEAPPENDER_H
