//
// Created by Łukasz Binkiewicz on 13/04/2020.
//

#include "ConfigException.h"

#include <utility>


ConfigException::ConfigException(std::string message) : message(std::move(message)) {}


