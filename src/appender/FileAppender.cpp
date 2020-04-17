//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#include "FileAppender.h"
#include "Layout.h"
#include <fstream>
#include <iostream>

void FileAppender::append(LoggingMessage* message) {
    std::lock_guard<std::mutex> lock(mtx);
    std::ofstream out(fileName, std::ios::app);
    if(out.is_open())
        out << Layout::format(message);
    out.close();
}

std::string FileAppender::getName() {
    return std::string();
}

FileAppender::FileAppender(const std::string &fileName) : fileName(fileName) {}

