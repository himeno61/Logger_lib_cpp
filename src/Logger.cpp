//
// Created by Łukasz Binkiewicz on 27/02/2020.
//

#include "Logger.h"
#include "LoggingMessage.h"

#include <utility>
#include <iostream>

void Logger::error(const std::string &message) {
    if (*ERROR >= loggerLevel)
        createLogEvent(WARN, std::move(message));
}

void Logger::warn(const std::string &message) {
    if (*WARN >= loggerLevel)
        createLogEvent(WARN, std::move(message));
}

void Logger::info(const std::string &message) {
    if (*INFO >= loggerLevel)
        createLogEvent(INFO, std::move(message));
}

void Logger::debug(const std::string &message) {
    if (*DEBUG >= loggerLevel)
        createLogEvent(DEBUG, std::move(message));
}

void Logger::createLogEvent(Level *level, const std::string &message) {
    auto *loggingMessage = new LoggingMessage(std::move(message), loggerName, level);
    std::vector<BaseAppender *> vector = config->getAllAppenders();
    for (auto &i : vector) {
        i->append(loggingMessage);
    }
}

Logger::Logger(const std::string &name) {
    loggerName = name;
    config = ConfigFactory::getConfig();
    loggerLevel = config->getLevel();
}

Logger::Logger(const Logger &logger) {
    loggerName = logger.loggerName;
    config = ConfigFactory::getConfig();
    loggerLevel = config->getLevel();
}
