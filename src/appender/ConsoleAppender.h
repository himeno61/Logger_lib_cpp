//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#ifndef LOGGER_LIB_CONSOLEAPPENDER_H
#define LOGGER_LIB_CONSOLEAPPENDER_H


#include "BaseAppender.h"

class ConsoleAppender: public BaseAppender {
public:
    void append(LoggingMessage message) override;

    std::string getName() override;

    ConsoleAppender();
};


#endif //LOGGER_LIB_CONSOLEAPPENDER_H
