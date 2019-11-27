#include "catch.hpp"
#include "UtilityFunctions.hpp"
#include "FibonacciNumberGenerator.hpp"
#include "PrimeNumberGenerator.hpp"


SCENARIO("Functional tests")
{
    GIVEN("One Fibonacci generator and numberOfValues = 10")
    {
        std::vector<GeneratorType> collection = {GeneratorType::FIBONACCI};
        auto numberOfValues = 10;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return same value as sumGeneratedNumbers")
            {
                CHECK(result == sumGeneratedNumbers(std::make_unique<FibonacciNumberGenerator>(), numberOfValues));
            }
        }
    }

    GIVEN("One Fibonacci generator, one prime generator and numberOfValues = 10")
    {
        std::vector<GeneratorType> collection = {GeneratorType::FIBONACCI, GeneratorType::PRIME};
        auto numberOfValues = 10;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return sum of sums for generated numbers")
            {
                CHECK(result == sumGeneratedNumbers(std::make_unique<FibonacciNumberGenerator>(), numberOfValues) +
                      sumGeneratedNumbers(std::make_unique<PrimeNumberGenerator>(), numberOfValues));
            }
        }
    }

    GIVEN("One Fibonacci generator, two prime generators and numberOfValues = 10")
    {
        std::vector<GeneratorType> collection = {GeneratorType::FIBONACCI, GeneratorType::PRIME, GeneratorType::PRIME};
        auto numberOfValues = 10;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return sum of sums for generated numbers")
            {
                CHECK(result == sumGeneratedNumbers(std::make_unique<FibonacciNumberGenerator>(), numberOfValues) +
                      sumGeneratedNumbers(std::make_unique<PrimeNumberGenerator>(), numberOfValues) + sumGeneratedNumbers(std::make_unique<PrimeNumberGenerator>(), numberOfValues));
            }
        }
    }
}
