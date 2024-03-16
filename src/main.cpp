#include "spdlog/spdlog.h"
#include "Algoritms.hpp"
#include <iostream>

int main()
{
    spdlog::info("Hello world");
    std::cout << add(1.4, 3) << std::endl;


    std::cout << pow(7.0, 4) << 
        ": " << pow2(7.0, 4) <<
        ": " << pow3<4>(7.0) << 
        std::endl;

    return 0;
}