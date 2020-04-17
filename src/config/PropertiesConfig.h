//
// Created by Łukasz Binkiewicz on 08/03/2020.
//

#ifndef LOGGER_LIB_PROPERTIESCONFIG_H
#define LOGGER_LIB_PROPERTIESCONFIG_H


#include <list>
#include "BaseConfig.h"


#include <fstream>
#include <map>
#include "PropertiesConfig.h"

class PropertiesConfig: public BaseConfig {

public:
    Level *getLevel() const override;
    std::vector<BaseAppender *> getAllAppenders() override;
    PropertiesConfig(std::string fileName);

private:
    std::map<std::string, std::string> getKeyValueMap(std::ifstream &infile);
    void parseKeyValueMap(std::map<std::string, std::string> &map);
    void parseSocketAppender(std::map<std::string, std::string> &map);
    void parseFileAppender(std::map<std::string, std::string> &map);
    void parseConsoleAppender(std::map<std::string, std::string> &map);
};


#endif //LOGGER_LIB_PROPERTIESCONFIG_H
