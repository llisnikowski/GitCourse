#include "Algoritms.hpp"

float add(float lhs, float rhs)
{
    return lhs + rhs;
}

float pow(double base, unsigned int exp)
{
    float result = 1.f;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

float pow2(float base, unsigned int exp)
{
    if(exp == 0){
        return 1;
    }
    else {
        return pow2(base, exp - 1) * base;
    }
}
