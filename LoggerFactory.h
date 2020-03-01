//
// Created by Łukasz Binkiewicz on 01/03/2020.
//

#ifndef LOGGER_LIB_LOGGERFACTORY_H
#define LOGGER_LIB_LOGGERFACTORY_H


#include "Logger.h"
#include "NetworkLogger.h"

class LoggerFactory {
public:
    Logger getLogger(class className);
    Logger getLogger(std::string loggerName);
    NetworkLogger getNetworkLogger(class className);
    NetworkLogger getNetworkLogger(std::string loggerName);
};


#endif //LOGGER_LIB_LOGGERFACTORY_H
