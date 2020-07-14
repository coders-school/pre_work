#pragma once

enum class GeneratorType
{
    FIBONACCI,
    PRIME
};

struct NumberGenerator
{
    virtual ~NumberGenerator() {} // Clang failed to compile/link without this
    virtual int next() = 0;
};

