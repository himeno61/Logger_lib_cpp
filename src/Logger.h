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

    Logger(const Logger &logger);

    void error(const std::string &message);

    void warn(const std::string &message);

    void info(const std::string &message);

    void debug(const std::string &message);

private:
    Level *loggerLevel;
    std::string loggerName;
    BaseConfig *config;

    void createLogEvent(Level *level, const std::string &message);
};


#endif //LOGGER_LIB_LOGGER_H
