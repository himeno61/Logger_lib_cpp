//
// Created by Łukasz Binkiewicz on 01/03/2020.
//

#include "LoggingMessage.h"

#include <utility>

LoggingMessage::LoggingMessage(Level levelOfMessage, std::string message) : levelOfMessage(std::move(
        levelOfMessage)), message(std::move(message)) {
    timeStamp = std::time(nullptr);
}
