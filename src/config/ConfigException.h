//
// Created by Łukasz Binkiewicz on 13/04/2020.
//

#ifndef LOGGER_LIB_CONFIGEXCEPTION_H
#define LOGGER_LIB_CONFIGEXCEPTION_H


#include <exception>
#include <string>

class ConfigException: public std::exception {
private:
    std::string message;
public:
    ConfigException(std::string message);


};


#endif //LOGGER_LIB_CONFIGEXCEPTION_H
