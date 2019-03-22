#pragma once
#include "NumberGenerator.hpp"

struct FibonacciNumberGenerator : public NumberGenerator
{
    int next() override;

private:
    int a{};
    int b{1};
};

