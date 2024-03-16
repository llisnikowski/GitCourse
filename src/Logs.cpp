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

void tree()
{
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5 - i; ++j) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void display(double value)
{
    spdlog::info("value: {0}", value);
}

void display(int value)
{
    spdlog::info("value: {0}", value);
}