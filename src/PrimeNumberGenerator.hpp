#pragma once
#include <vector>
#include "NumberGenerator.hpp"

struct PrimeNumberGenerator : public NumberGenerator
{
    int next() override;
    ~PrimeNumberGenerator() {};

private:
    void appendNextPrime();
    bool isPrime(int n);

    std::vector<int> primes = {2, 3};
};

