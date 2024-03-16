#include "Logs.hpp"
#include "spdlog/spdlog.h"
#include <iostream>

void logA()
{
    spdlog::info("LogA");
}


void error()
{
    spdlog::error("error");
}

void stairs()
{
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
