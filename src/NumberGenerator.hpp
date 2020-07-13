#pragma once

enum class GeneratorType
{
    FIBONACCI,
    PRIME
};

struct NumberGenerator
{
    virtual ~NumberGenerator() = default;
    virtual int next() = 0;
};

