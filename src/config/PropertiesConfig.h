//
// Created by Łukasz Binkiewicz on 08/03/2020.
//

#ifndef LOGGER_LIB_PROPERTIESCONFIG_H
#define LOGGER_LIB_PROPERTIESCONFIG_H


#include "BaseConfig.h"

class PropertiesConfig: public BaseConfig {

public:
    explicit PropertiesConfig(std::string fileName);
};


#endif //LOGGER_LIB_PROPERTIESCONFIG_H
