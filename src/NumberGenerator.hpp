#pragma once

enum class GeneratorType
{
    RANDOM,
    FIBONACCI,
    PRIME
};

struct NumberGenerator
{
    virtual int next() = 0;
};

