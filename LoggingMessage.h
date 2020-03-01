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
    std::time_t timeStamp ;
    Level levelOfMessage;
    std::string message;
public:
    LoggingMessage(Level levelOfMessage, std::string message);

};



#endif //LOGGER_LIB_LOGGINGMESSAGE_H
