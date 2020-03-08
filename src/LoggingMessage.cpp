//
// Created by Łukasz Binkiewicz on 01/03/2020.
//

#include "LoggingMessage.h"

#include <utility>


LoggingMessage::LoggingMessage(std::string message, std::string sourceOfMessage,
                               Level *level) : message(std::move(message)),
                                               sourceOfMessage(std::move(sourceOfMessage)) {
    levelOfMessage = level;
    timeStamp = std::time(nullptr);
}

time_t LoggingMessage::getTimeStamp() const {
    return timeStamp;
}

std::string LoggingMessage::getMessage() const {
    return message;
}

Level *LoggingMessage::getLevelOfMessage() const {
    return levelOfMessage;
}
