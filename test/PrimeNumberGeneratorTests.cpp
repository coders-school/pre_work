#include "catch.hpp"
#include "PrimeNumberGenerator.hpp"

SCENARIO("check Prime Number Generator")
{
    GIVEN("Prime Number Generator")
    {
        PrimeNumberGenerator png;
        WHEN("First value is requested")
        {
            auto value = png.next();
            THEN("It should be 2")
            {
                CHECK(value == 2);
            }
        }
        WHEN("Ten first values are requested")
        {
            std::vector<int> values = {};
            for(int i = 0; i < 10; i++)
            {
                values.emplace_back(png.next());
            }
            THEN("It should be 2, 3, 5, 7, 11, 13, 17, 19, 23, 29")
            {
                std::vector<int> expected = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
                CHECK(values == expected);
            }
        }
    }
}
