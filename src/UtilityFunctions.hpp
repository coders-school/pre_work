#include <vector>
#include <memory>
#include "NumberGenerator.hpp"


void printNumbers(NumberGenerator & numberGenerator, int numOfNumbers);
std::unique_ptr<NumberGenerator> createGenerator(GeneratorType type);
int sumGeneratedNumbers(std::unique_ptr<NumberGenerator> gen, int num);
int sumNumbersFromGenerators(std::vector<GeneratorType> const & types, int num);

