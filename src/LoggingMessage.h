//
// Created by Łukasz Binkiewicz on 01/03/2020.
//

#ifndef LOGGER_LIB_LOGGINGMESSAGE_H
#define LOGGER_LIB_LOGGINGMESSAGE_H

#include<ctime>
#include <string>
#include "Level.h"

class LoggingMessage {
private:
    std::time_t timeStamp;
    std::string message;
    std::string sourceOfMessage;
    Level *levelOfMessage;

public:


    LoggingMessage(std::string message, std::string sourceOfMessage, Level *levelOfMessage);

    time_t getTimeStamp() const;

    std::string getMessage() const;

    Level *getLevelOfMessage() const;

    std::string getSourceOfMessage() const {
        return sourceOfMessage;
    }
};


#endif //LOGGER_LIB_LOGGINGMESSAGE_H
