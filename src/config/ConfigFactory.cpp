//
// Created by Łukasz Binkiewicz on 08/03/2020.
//

#include <sys/stat.h>
#include "ConfigFactory.h"
#include "PropertiesConfig.h"

BaseConfig *ConfigFactory::getConfig() {
    if (!config) {
        std::string loggerConfigFile = "logger.propetries";
        struct stat buffer{};
        if (stat(loggerConfigFile.c_str(), &buffer) == 0)
            config = new PropertiesConfig(loggerConfigFile);
        else
            config = new BaseConfig();
    }
    return config;
}
