#pragma once
#include <cstdint>

float add(float lhs, float rhs);

float pow(float base, unsigned int exp);
float pow2(float base, unsigned int exp);

template <std::size_t EXP>
double pow3(double base)
{
    if constexpr (EXP == 0){
        return 1;
    }
    else {
        return pow3<EXP-1>(base) * base;
    }
}
