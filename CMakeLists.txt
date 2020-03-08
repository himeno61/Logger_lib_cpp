cmake_minimum_required(VERSION 3.12)
project(logger_lib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/library.cpp src/Logger.cpp src/Logger.h src/Level.cpp src/Level.h src/LoggingMessage.cpp src/LoggingMessage.h src/appender/BaseAppender.h src/appender/FileAppender.cpp src/appender/FileAppender.h src/appender/SocketAppender.cpp src/appender/SocketAppender.h src/appender/ConsoleAppender.cpp src/appender/ConsoleAppender.h src/appender/Layout.cpp src/appender/Layout.h src/config/PropertiesConfig.cpp src/config/PropertiesConfig.h src/config/BaseConfig.h src/config/ConfigFactory.cpp src/config/ConfigFactory.h)

add_library(logger_lib ${SOURCE_FILES})

enable_testing()
ADD_SUBDIRECTORY(tests)

