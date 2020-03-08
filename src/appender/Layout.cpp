//
// Created by Łukasz Binkiewicz on 05/03/2020.
//

#include <sstream>
#include "Layout.h"

std::string Layout::format(LoggingMessage *message) {
    std::string str;
    str.append("[");
    str.append(message->getLevelOfMessage()->getLevelStr());
    str.append("] ");
    std::stringstream ss;
    ss << message->getTimeStamp();
    str.append(ss.str());
    str.append(" - ");
    str.append(message->getSourceOfMessage());
    str.append(" - ");
    str.append(message->getMessage());
    str.append(NEWLINE);
    return str;
}
