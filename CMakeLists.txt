cmake_minimum_required(VERSION 3.15)
project(logger_lib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES library.cpp Logger.cpp Logger.h Level.cpp Level.h LoggerFactory.cpp LoggerFactory.h LoggingMessage.cpp LoggingMessage.h NetworkLogger.cpp NetworkLogger.h BaseAppender.h)

add_library(logger_lib ${SOURCE_FILES})

enable_testing()
ADD_SUBDIRECTORY(tests)