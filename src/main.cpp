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
    display(1.4f);
    display(5);

    return 0;
}