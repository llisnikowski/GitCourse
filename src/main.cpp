#include "spdlog/spdlog.h"
#include "Algoritms.hpp"
#include <iostream>

int main()
{
    spdlog::info("Hello world");
    std::cout << add(1.4, 3) << std::endl;

    return 0;
}