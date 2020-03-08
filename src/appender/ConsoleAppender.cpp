//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#include <iostream>
#include "ConsoleAppender.h"
#include "Layout.h"

void ConsoleAppender::append(LoggingMessage* message) {
    std::string formattedMessage = Layout::format(message);
    std::lock_guard<std::mutex> lock(mtx);
    std::cout<<formattedMessage;
}

std::string ConsoleAppender::getName() {
    return std::string();
}

ConsoleAppender::ConsoleAppender() {}


