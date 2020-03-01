//
// Created by Łukasz Binkiewicz on 28/02/2020.
//

#include "Level.h"


Level Level::toLevel(int val) {
    switch (val) {
        case INT8_MAX:
            return (const Level &) OFF;
        case ERROR_INT:
            return (const Level &) ERROR;
        case WARN_INT:
            return (const Level &) WARN;
        case INFO_INT:
            return (const Level &) INFO;
        case DEBUG_INT:
            return (const Level &) DEBUG;
        case ALL_INT:
            return (const Level &) ALL;
        default:
            return (const Level &) ALL;
    }
}

Level Level::toLevel(std::string val) {
    if (val.empty())
        return (const Level &) DEBUG;
    if (val == "OFF")
        return (const Level &) OFF;
    if (val == "ERROR")
        return (const Level &) ERROR;
    if (val == "WARN")
        return (const Level &) WARN;
    if (val == "INFO")
        return (const Level &) INFO;
    if (val == "DEBUG")
        return (const Level &) DEBUG;
    if (val =="ALL")
        return (const Level &) ALL;
    return (const Level &) DEBUG;
}

int Level::getLevel() const {
    return level;
}

const std::string &Level::getLevelStr() const {
    return levelStr;
}

int Level::getSyslogEquivalent() const {
    return syslogEquivalent;
}

bool Level::isGreaterOrEqual(Level l) const {
    return level >= l.getLevel();
}