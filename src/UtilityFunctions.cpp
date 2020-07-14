#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>
#include "NumberGenerator.hpp"
#include "FibonacciNumberGenerator.hpp"
#include "PrimeNumberGenerator.hpp"


void printNumbers(NumberGenerator & numberGenerator, int numOfNumbers)
{
    for(int i = 0; i < numOfNumbers; ++i)
    {
        std::cout << numberGenerator.next() << std::endl;
    }
}

std::unique_ptr<NumberGenerator> createGenerator(GeneratorType type)
{
    switch(type)
    {
    case GeneratorType::FIBONACCI:
        return std::make_unique<FibonacciNumberGenerator>();
    case GeneratorType::PRIME:
        return std::make_unique<PrimeNumberGenerator>();
    default:
        throw std::logic_error("Invalid number generator type!");
    }
}

int sumGeneratedNumbers(std::unique_ptr<NumberGenerator> gen, int num)
{
    int acc = 0;
    for(int i = 0; i < num; ++i)
    {
        acc += gen->next();
    }
    return acc;
}


int sumNumbersFromGenerators(std::vector<GeneratorType> const & types, int num)
{
    int sum = 0;
    for(auto const& type: types) {
        sum += sumGeneratedNumbers(createGenerator(type), num);
    }
    
    return sum;
}

