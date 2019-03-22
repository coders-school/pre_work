#include "PrimeNumberGenerator.hpp"
#include <algorithm>

int PrimeNumberGenerator::next()
{
    int prime = primes[primes.size() - 2];
    appendNextPrime();
    return prime;
}

void PrimeNumberGenerator::appendNextPrime()
{
    int v = primes.back() + 1;
    while(!isPrime(v))
    {
        v++;
    }
    primes.push_back(v);
}

bool PrimeNumberGenerator::isPrime(int n)
{
    return std::none_of(std::begin(primes), std::end(primes), [n](auto p_value)
    {
        return (n % p_value) == 0;
    });
}
