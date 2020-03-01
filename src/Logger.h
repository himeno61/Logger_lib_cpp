//
// Created by Łukasz Binkiewicz on 27/02/2020.
//

#ifndef LOGGER_LIB_LOGGER_H
#define LOGGER_LIB_LOGGER_H


#include "Level.h"

class Logger {

public:
    void error(std::string message);
    void warn(std::string message);
    void info(std::string message);
    void debug(std::string message);
    void log(Level level, std::string message);
    void createLogEvent(Level level,std::string message);

private:
    Level loggerLevel;
    std::string loggerName;
};


#endif //LOGGER_LIB_LOGGER_H
