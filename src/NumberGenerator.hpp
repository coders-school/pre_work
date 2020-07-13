#pragma once

enum class GeneratorType
{
    FIBONACCI,
    PRIME
};

struct NumberGenerator
{
    virtual ~NumberGenerator() {};
    virtual int next() = 0;
};

