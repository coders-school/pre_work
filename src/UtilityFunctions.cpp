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
        throw std::logic_error("Invalid number generator type! - incorrect genrator type: " + std::to_string(static_cast<int>(type)));
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
    auto sum = 0;
    // TODO: Write a loop that goes over a collection of GeneratorType values (types)
    // and creates generator for given type (use createGenerator function),
    // then sums up all generated values for each type and returns the sum of sums.
    // Use sumGeneratedNumbers to sum generated values for each generator.
    for(const auto& generator:types) {
        auto new_generator = std::move(createGenerator(generator));
        sum += sumGeneratedNumbers(std::move(new_generator), num);
    }
    return sum;
}

