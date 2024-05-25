#pragma once

#include "ATarget.hpp"

class Dummy: public ATarget
{
public:
    Dummy();
    ~Dummy();
    const ATarget *clone();
};