#include "catch.hpp"
#include "RandomNumberGenerator.hpp"

SCENARIO("check Random Number Generator")
{
    GIVEN("Random Number Generator")
    {
        RandomNumberGenerator rng;
        WHEN("Next value is requested")
        {
            auto value = rng.next();
            THEN("It should be 42")
            {
                CHECK(value == 42);
            }
        }
        WHEN("Consequtive values are requested")
        {
            auto value1 = rng.next();
            auto value2 = rng.next();
            THEN("They should be always 42 xD")
            {
                CHECK(value1 == 42);
                CHECK(value2 == 42);
            }
        }
    }
}
