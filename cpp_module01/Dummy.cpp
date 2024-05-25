#include "Dummy.hpp"

Dummy::Dummy()
{
    _type = "Target Practice Dummy";
}

Dummy::~Dummy()
{
}

const ATarget *Dummy::clone()
{
    return (new Dummy());
}