#pragma once
#include "NumberGenerator.hpp"

struct FixedNumberGenerator : public NumberGenerator
{
    int next() override { return 42; }
};

