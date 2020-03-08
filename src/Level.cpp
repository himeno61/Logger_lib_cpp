//
// Created by Łukasz Binkiewicz on 28/02/2020.
//

#include "Level.h"


Level *Level::toLevel(int val) {
    switch (val) {
        case INT8_MAX:
            return OFF;
        case ERROR_INT:
            return ERROR;
        case WARN_INT:
            return WARN;
        case INFO_INT:
            return INFO;
        case DEBUG_INT:
            return DEBUG;
        case ALL_INT:
            return ALL;
        default:
            return ALL;
    }
}

Level *Level::toLevel(const std::string &val) {
    if (val.empty())
        return DEBUG;
    if (val == "OFF")
        return OFF;
    if (val == "ERROR")
        return ERROR;
    if (val == "WARN")
        return WARN;
    if (val == "INFO")
        return INFO;
    if (val == "DEBUG")
        return DEBUG;
    if (val == "ALL")
        return ALL;
    return DEBUG;
}

int Level::getLevel() {
    return level;
}

std::string Level::getLevelStr() {
    return levelStr;
}

int Level::getSyslogEquivalent() {
    return syslogEquivalent;
}


bool Level::operator>=(Level *l) {
    return level >= l->getLevel();
}