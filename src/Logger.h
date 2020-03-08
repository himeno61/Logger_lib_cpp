//
// Created by Łukasz Binkiewicz on 27/02/2020.
//

#ifndef LOGGER_LIB_LOGGER_H
#define LOGGER_LIB_LOGGER_H


#include "Level.h"
#include "config/BaseConfig.h"
#include "config/ConfigFactory.h"

class Logger {

public:
    Logger(const std::string &loggerName);

    void error(const std::string &message);

    void warn(std::string message);

    void info(std::string message);

    void debug(std::string message);

private:
    Level *loggerLevel;
    std::string loggerName;
    BaseConfig *config;

    void createLogEvent(Level *level, std::string message);
};


#endif //LOGGER_LIB_LOGGER_H
