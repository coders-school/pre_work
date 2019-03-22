#include <iostream>
#include "NumberGenerator.hpp"
#include "UtilityFunctions.hpp"

int main()
{
    auto gen = createGenerator(GeneratorType::RANDOM);
    auto generators = { GeneratorType::RANDOM,
                        GeneratorType::FIBONACCI,
                        GeneratorType::PRIME };
    std::cout << "Result: " << sumNumbersFromGenerators(generators, 10) << std::endl;
    return 0;
}

