#include <iostream>
#include "NumberGenerator.hpp"
#include "UtilityFunctions.hpp"

int main()
{
    auto generators = { GeneratorType::FIBONACCI,
                        GeneratorType::PRIME };
    int result = sumNumbersFromGenerators(generators, 10);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
