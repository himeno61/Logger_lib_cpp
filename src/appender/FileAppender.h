//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#ifndef LOGGER_LIB_FILEAPPENDER_H
#define LOGGER_LIB_FILEAPPENDER_H


#include "BaseAppender.h"

class FileAppender: public BaseAppender {
public:
    void append(LoggingMessage* message) override;

    std::string getName() override;
};


#endif //LOGGER_LIB_FILEAPPENDER_H
