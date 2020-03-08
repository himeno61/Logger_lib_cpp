//
// Created by Łukasz Binkiewicz on 05/03/2020.
//

#ifndef LOGGER_LIB_LAYOUT_H
#define LOGGER_LIB_LAYOUT_H


#include <string>
#include "../LoggingMessage.h"

#ifdef _WIN32
#define NEWLINE "\r\n"
#elif defined macintosh // OS 9
#define NEWLINE "\r"
#else
#define NEWLINE "\n" // Mac OS X uses \n
#endif

class Layout {
public:
    static std::string format(LoggingMessage *message);
};

#endif //LOGGER_LIB_LAYOUT_H
