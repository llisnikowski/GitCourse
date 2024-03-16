#include "spdlog/spdlog.h"
#include "Logs.hpp"

int main()
{
    spdlog::info("Hello world");
    logA();
    stairs();
    error();
    tree();
    display(1.4);

    return 0;
}