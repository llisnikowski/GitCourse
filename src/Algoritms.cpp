#include "Algoritms.hpp"

float add(float lhs, float rhs)
{
    return lhs + rhs;
}

float pow(float base, unsigned int exp)
{
    float result = 1.f;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}
