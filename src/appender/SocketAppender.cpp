//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#include "SocketAppender.h"

void SocketAppender::append(LoggingMessage* message) {
    std::lock_guard<std::mutex> lock(mtx);
}

std::string SocketAppender::getName() {
    return std::string();
}

SocketAppender::SocketAppender(const std::string &ip, int port) : ip(ip), port(port) {}


