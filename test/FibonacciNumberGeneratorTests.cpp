#include "catch.hpp"
#include "FibonacciNumberGenerator.hpp"

SCENARIO("check Fibonacci Number Generator")
{
    GIVEN("Fibonacci Number Generator")
    {
        FibonacciNumberGenerator fng;
        WHEN("Two first values are requested")
        {
            auto value1 = fng.next();
            auto value2 = fng.next();
            THEN("They should be 1 and 1")
            {
                CHECK(value1 == 1);
                CHECK(value2 == 1);
            }
        }
        WHEN("N-th value is requested")
        {
            auto previous2 = fng.next();
            auto previous = fng.next();
            auto current = fng.next();
            for (int i = 0; i < 9; i++)
            {
                previous2 = previous;
                previous = current;
                current = fng.next();
                THEN("It should be a sum of n-1 and n-2")
                {
                    CHECK(current == previous2 + previous);
                }
            }
        }
    }
}
