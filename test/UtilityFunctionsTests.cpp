#include "catch.hpp"
#include "UtilityFunctions.hpp"
#include "stubs/FixedNumberGenerator.hpp"

SCENARIO("check createGenerator() function")
{
    GIVEN("Generator type FIBONACCI")
    {
        auto type = GeneratorType::FIBONACCI;

        WHEN("Generator is created with provided type")
        {
            auto generator = createGenerator(type);

            THEN("It should not be a null pointer")
            {
                CHECK(generator);
            }
        }
    }

    GIVEN("Not existing generator type")
    {
        auto type = static_cast<GeneratorType>(-1);

        WHEN("Generator is created with provided type")
        {
            THEN("It should throw logic_error")
            {
                CHECK_THROWS_AS(createGenerator(type), std::logic_error);
            }
        }
    }
}

SCENARIO("check sumGeneratedNumbers() function")
{
    GIVEN("FixedNumberGenerator stub and numberOfValues = 10")
    {
        auto generator = std::make_unique<FixedNumberGenerator>();
        auto numberOfValues = 10;

        WHEN("sumGeneratedNumbers is called")
        {
            auto result = sumGeneratedNumbers(std::move(generator), numberOfValues);

            THEN("It should return 420")
            {
                CHECK(result == numberOfValues * 42);
            }
        }
    }
}

SCENARIO("check sumNumbersFromGenerators() function")
{
    GIVEN("Empty generators collection and numberOfValues = 1")
    {
        std::vector<GeneratorType> collection = {};
        auto numberOfValues = 1;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 0")
            {
                CHECK(result == 0);
            }
        }
    }
    
    GIVEN("One FIBONACCI generator collection and numberOfValues = 1")
    {
        std::vector<GeneratorType> collection = {GeneratorType::FIBONACCI};
        auto numberOfValues = 1;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 1")
            {
                CHECK(result == 1);
            }
        }
    }
    
    GIVEN("One FIBONACCI generator collection and numberOfValues = 5")
    {
        std::vector<GeneratorType> collection = {GeneratorType::FIBONACCI};
        auto numberOfValues = 5;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 1+1+2+3+5")
            {
                CHECK(result == 1+1+2+3+5);
            }
        }
    }

    GIVEN("Two FIBONACCI generators and numberOfValues = 1")
    {
        std::vector<GeneratorType> collection = {GeneratorType::FIBONACCI, GeneratorType::FIBONACCI};
        auto numberOfValues = 1;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 2")
            {
                CHECK(result == 2);
            }
        }
    }

    GIVEN("Two FIBONACCI generators and numberOfValues = 5")
    {
        std::vector<GeneratorType> collection = {GeneratorType::FIBONACCI, GeneratorType::FIBONACCI};
        auto numberOfValues = 5;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 2*(1+1+2+3+5)")
            {
                CHECK(result == 2*(1+1+2+3+5));
            }
        }
    }

    GIVEN("One PRIME generator collection and numberOfValues = 1")
    {
        std::vector<GeneratorType> collection = {GeneratorType::PRIME};
        auto numberOfValues = 1;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 2")
            {
                CHECK(result == 2);
            }
        }
    }
    
    GIVEN("One PRIME generator collection and numberOfValues = 5")
    {
        std::vector<GeneratorType> collection = {GeneratorType::PRIME};
        auto numberOfValues = 5;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return (2+3+5+7+11)")
            {
                CHECK(result == (2+3+5+7+11));
            }
        }
    }

    GIVEN("Two PRIME generators and numberOfValues = 1")
    {
        std::vector<GeneratorType> collection = {GeneratorType::PRIME, GeneratorType::PRIME};
        auto numberOfValues = 1;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 4")
            {
                CHECK(result == 4);
            }
        }
    }

    GIVEN("Two PRIME generators and numberOfValues = 5")
    {
        std::vector<GeneratorType> collection = {GeneratorType::PRIME, GeneratorType::PRIME};
        auto numberOfValues = 5;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 2*(2+3+5+7+11)")
            {
                CHECK(result == 2*(2+3+5+7+11));
            }
        }
    }

    GIVEN("Two PRIME and Two Fibonacci generators and numberOfValues = 1")
    {
        std::vector<GeneratorType> collection = {GeneratorType::PRIME, GeneratorType::PRIME};
        auto numberOfValues = 1;

        WHEN("sumNumbersFromGenerators is called")
        {
            auto result = sumNumbersFromGenerators(collection, numberOfValues);

            THEN("It should return 4")
            {
                CHECK(result == 4);
            }
        }
    }
}
