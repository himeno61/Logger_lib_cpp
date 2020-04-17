//
// Created by Łukasz Binkiewicz on 03/03/2020.
//

#ifndef LOGGER_LIB_FILEAPPENDER_H
#define LOGGER_LIB_FILEAPPENDER_H


#include <mutex>
#include "BaseAppender.h"

class FileAppender: public BaseAppender {
private:
    std::string fileName;

    static std::mutex mtx;
public:
    FileAppender(const std::string &fileName);

    void append(LoggingMessage* message) override;

    std::string getName() override;
};


#endif //LOGGER_LIB_FILEAPPENDER_H
