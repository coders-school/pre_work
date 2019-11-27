#pragma once
#include "NumberGenerator.hpp"

struct FibonacciNumberGenerator : public NumberGenerator
{
    ~FibonacciNumberGenerator() = default;
    int next() override;

private:
    int a{};
    int b{1};
};

