//
// Created by Łukasz Binkiewicz on 27/02/2020.
//

#include "Logger.h"
#include "LoggingMessage.h"

#include <utility>

void Logger::error(std::string message) {

}

void Logger::warn(std::string message) {
    if (WARN->isGreaterOrEqual(loggerLevel))
        createLogEvent((const Level &) WARN, std::move(message));
}

void Logger::info(std::string message) {
    if (INFO->isGreaterOrEqual(loggerLevel))
        createLogEvent((const Level &) INFO, std::move(message));
}

void Logger::debug(std::string message) {
    if (DEBUG->isGreaterOrEqual(loggerLevel))
        createLogEvent((const Level &) DEBUG, std::move(message));
}

void Logger::log(Level level, std::string message) {
    if(level.isGreaterOrEqual(loggerLevel))
        createLogEvent(level, message);
}

void Logger::createLogEvent(Level level, std::string message) {
    LoggingMessage *loggingMessage = new LoggingMessage(level, message);
}


