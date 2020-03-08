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
        createLogEvent(WARN, std::move(message));
}

void Logger::info(std::string message) {
    if (*INFO >= loggerLevel)
        createLogEvent(INFO, std::move(message));
}

void Logger::debug(std::string message) {
    if (*DEBUG >= loggerLevel)
        createLogEvent(DEBUG, std::move(message));
}

void Logger::createLogEvent(Level *level, std::string message) {
    auto *loggingMessage = new LoggingMessage(std::move(message), loggerName, level);
    std::vector<BaseAppender *> vector = config->getAllAppenders();
    for ( auto &i : vector ) {
        i->append(loggingMessage);
    }
}

Logger::Logger(const std::string &loggerName) {
    this->loggerName = loggerName;
    config = ConfigFactory::getConfig();
    loggerLevel = config->getLevel();
}


