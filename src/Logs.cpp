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
