//
// Created by Łukasz Binkiewicz on 28/02/2020.
//

#ifndef LOGGER_LIB_LEVEL_H
#define LOGGER_LIB_LEVEL_H

#include <string>
#include <utility>
#include <climits>

static const int OFF_INT = INT_MAX;
static const int ERROR_INT = 40000;
static const int WARN_INT = 30000;
static const int INFO_INT = 20000;
static const int DEBUG_INT = 10000;
static const int ALL_INT = INT_MIN;

class Level {
public:
    Level(int level, std::string levelStr, int syslogEquivalent);

private:
    int level;
    std::string levelStr;
    int syslogEquivalent;
public:
    static Level *toLevel(int val);

    static Level *toLevel(const std::string &val);

    bool operator>=(Level &level);

    int getLevel();

    std::string getLevelStr();

    int getSyslogEquivalent();
};

Level::Level(int level, std::string levelStr, int syslogEquivalent) : level(level), levelStr(std::move(levelStr)),
                                                                      syslogEquivalent(syslogEquivalent) {}


static Level *OFF = new Level(OFF_INT, "OFF", 0);
static Level *ERROR = new Level(ERROR_INT, "ERROR", 3);
static Level *WARN = new Level(WARN_INT, "WARN", 4);
static Level *INFO = new Level(INFO_INT, "INFO", 6);
static Level *DEBUG = new Level(DEBUG_INT, "DEBUG", 7);
static Level *ALL = new Level(ALL_INT, "ALL", 7);

#endif //LOGGER_LIB_LEVEL_H
