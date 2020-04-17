//
// Created by Łukasz Binkiewicz on 29/02/2020.
//

#include <string>

#include <Logger.h>

int main(int, char **) {
    std::string str = "dfsf";
    Logger log("str");
    log.info("fdf");
}