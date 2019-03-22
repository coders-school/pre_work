#pragma once
#include "NumberGenerator.hpp"

struct RandomNumberGenerator : public NumberGenerator
{
    int next() override;
};

