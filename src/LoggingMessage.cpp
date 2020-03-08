//
// Created by Łukasz Binkiewicz on 01/03/2020.
//

#include "LoggingMessage.h"

#include <utility>


LoggingMessage::LoggingMessage(std::string message, std::string sourceOfMessage,
                               Level levelOfMessage) : message(std::move(message)), sourceOfMessage(std::move(sourceOfMessage)),
                                                              levelOfMessage(std::move(levelOfMessage)) {
    timeStamp = std::time(nullptr);
}

time_t LoggingMessage::getTimeStamp() const {
    return timeStamp;
}

std::string LoggingMessage::getMessage() const {
    return message;
}

Level LoggingMessage::getLevelOfMessage() const {
    return levelOfMessage;
}
