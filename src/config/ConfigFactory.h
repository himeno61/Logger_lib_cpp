//
// Created by Łukasz Binkiewicz on 08/03/2020.
//

#ifndef LOGGER_LIB_CONFIGFACTORY_H
#define LOGGER_LIB_CONFIGFACTORY_H


#include "BaseConfig.h"

class ConfigFactory {
private:
    static BaseConfig* config;

public:
    static BaseConfig * getConfig();

};

#endif //LOGGER_LIB_CONFIGFACTORY_H
