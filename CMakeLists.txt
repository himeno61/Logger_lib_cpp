cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -c")

project(logger_lib)

############################################################
# Create a library
############################################################

set(SOURCE_FILES src/Logger.cpp src/Logger.h src/Level.cpp src/Level.h src/LoggingMessage.cpp src/LoggingMessage.h src/appender/BaseAppender.h src/appender/FileAppender.cpp src/appender/FileAppender.h src/appender/SocketAppender.cpp src/appender/SocketAppender.h src/appender/ConsoleAppender.cpp src/appender/ConsoleAppender.h src/appender/Layout.cpp src/appender/Layout.h src/config/PropertiesConfig.cpp src/config/PropertiesConfig.h src/config/BaseConfig.h src/config/ConfigFactory.cpp src/config/ConfigFactory.h src/config/ConfigException.cpp src/config/ConfigException.h)

add_library(logger_lib STATIC ${SOURCE_FILES})

target_include_directories(logger_lib PUBLIC ${PROJECT_SOURCE_DIR}/src)


############################################################
# Create an executable
############################################################

include_directories(src)

ADD_EXECUTABLE(test_logger_lib tests/LoggerTest.cpp)

target_link_libraries(test_logger_lib logger_lib)