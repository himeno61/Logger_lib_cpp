cmake_minimum_required(VERSION 3.12)
project(logger_lib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES src/library.cpp src/Logger.cpp src/Logger.h src/Level.cpp src/Level.h src/LoggerFactory.cpp src/LoggerFactory.h src/LoggingMessage.cpp src/LoggingMessage.h src/NetworkLogger.cpp src/NetworkLogger.h src/BaseAppender.h)

add_library(logger_lib ${SOURCE_FILES})

enable_testing()
ADD_SUBDIRECTORY(tests)