#include <iostream>
#include "NumberGenerator.hpp"
#include "UtilityFunctions.hpp"

int main()
{
    auto generators = { GeneratorType::FIBONACCI,
                        GeneratorType::PRIME };
    std::cout << "Result: " << sumNumbersFromGenerators(generators, 10) << std::endl;
    [[maybe_unused]] int* leak = new int(4);
    return 0;
}
