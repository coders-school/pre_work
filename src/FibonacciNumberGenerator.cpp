#include "FibonacciNumberGenerator.hpp"

int FibonacciNumberGenerator::next()
{
    int n = b;
    int tmp = a;
    a = b;
    b = tmp + a;
    return n;
}

