//
// Created by Łukasz Binkiewicz on 08/03/2020.
//


#include <fstream>
#include <map>
#include <zconf.h>
#include "PropertiesConfig.h"
#include "BaseConfig.h"
#include "ConfigException.h"
#include "../appender/SocketAppender.h"
#include "../appender/FileAppender.h"

PropertiesConfig::PropertiesConfig(std::string fileName) {
    std::ifstream infile;

    infile.open(fileName);
    if (!infile) {

    }
    std::map<std::string, std::string> valueMap = getKeyValueMap(infile);
    infile.close();
    parseKeyValueMap(valueMap);
}

std::map<std::string, std::string> PropertiesConfig::getKeyValueMap(std::ifstream &infile) {
    std::string STRING;
    std::map<std::string, std::string> valueMap;
    while (!infile.eof()) {
        getline(infile, STRING);
        if (STRING[0] == '#') continue;
        std::string key, value;
        sscanf(STRING.c_str(), "%s %s", &key, &value);
        valueMap[key] = value;
    }
    return valueMap;
}

Level *PropertiesConfig::getLevel() const {
    return level;
}

std::vector<BaseAppender *> PropertiesConfig::getAllAppenders() {
    return appendersVector;
}

void PropertiesConfig::parseKeyValueMap(std::map<std::string, std::string> &map) {
    auto itr = map.find("logger.level");
    if (itr != map.end())
        level = Level::toLevel(itr->second);
    parseSocketAppender(map);
    parseFileAppender(map);
    parseConsoleAppender(map);
}

void PropertiesConfig::parseSocketAppender(std::map<std::string, std::string> &map) {
    auto portItr = map.find("net.port");
    auto ipItr = map.find("net.ip");
    if (portItr == map.end() ^ ipItr == map.end())
        throw ConfigException("Missing one of the network properties");
    if (portItr == map.end() & ipItr == map.end()) {
        try {
            appendersVector.push_back(new SocketAppender(portItr->second, std::stoi(ipItr->second)));
        } catch (...) {
            throw ConfigException("Not able to connect to the socket");
        }
    }
}

void PropertiesConfig::parseFileAppender(std::map<std::string, std::string> &map) {
    auto fileNameItr = map.find("file.name");
    auto appenderEnableItr = map.find("file.enable");

    if (fileNameItr != map.end()) {
        std::string fileName;
        fileName.append(std::to_string(::getpid()));
        fileName.append("_");
        fileName.append(fileNameItr->second);
        fileName.append(".log");
        appendersVector.push_back(new FileAppender(fileName));
    } else if (appenderEnableItr != map.end()) {
        std::string fileName = std::to_string(::getpid());
        fileName.append(".log");
        appendersVector.push_back(new FileAppender(fileName));
    }
}

void PropertiesConfig::parseConsoleAppender(std::map<std::string, std::string> &map) {
    auto disableItr = map.find("console.enable");

    if (!(disableItr != map.end() & disableItr->second == "false")) {
        appendersVector.push_back(new ConsoleAppender());
    }
}


