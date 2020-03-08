//
// Created by Łukasz Binkiewicz on 27/02/2020.
//

#include "Logger.h"
#include "LoggingMessage.h"

#include <utility>

void Logger::error(const std::string &message) {

}

void Logger::warn(std::string message) {
    if (*WARN >= loggerLevel)
        createLogEvent((const Level &) WARN, std::move(message));
}

void Logger::info(std::string message) {
    if (*INFO >= loggerLevel)
        createLogEvent((const Level &) INFO, std::move(message));
}

void Logger::debug(std::string message) {
    if (*DEBUG >= loggerLevel)
        createLogEvent((const Level &) DEBUG, std::move(message));
}

void Logger::log(Level &level, std::string message) {
    if (level >= loggerLevel)
        createLogEvent(level, std::move(message));
}

void Logger::createLogEvent(Level level, std::string message) {
    auto *loggingMessage = new LoggingMessage(std::move(message), loggerName, std::move(level));

}


