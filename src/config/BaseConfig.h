//
// Created by Łukasz Binkiewicz on 08/03/2020.
//

#ifndef LOGGER_LIB_BASECONFIG_H
#define LOGGER_LIB_BASECONFIG_H


#include <vector>
#include "../appender/BaseAppender.h"
#include "../appender/ConsoleAppender.h"

class BaseConfig {
private:
    std::vector<BaseAppender *> appendersVector;
    Level *level;
public:
    BaseConfig() {
        appendersVector.push_back(new ConsoleAppender());
        level = INFO;
    }

    Level *getLevel() const;

    std::vector<BaseAppender *> getAllAppenders();
};

std::vector<BaseAppender *> BaseConfig::getAllAppenders() {
    return appendersVector;
}

Level *BaseConfig::getLevel() const {
    return level;
}


#endif //LOGGER_LIB_BASECONFIG_H
