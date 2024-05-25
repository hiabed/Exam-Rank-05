#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &other)
{
    (void)other;
    return *this;
}

TargetGenerator::TargetGenerator(const TargetGenerator &other)
{
    *this = other;
}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
    {
        _target[target->getType()] = target;
    }
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
    std::map <std::string, ATarget *>::iterator it = _target.find(target);
    if (it != _target.end())
    {
        _target.erase(_target.find(target));
    }
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    ATarget *tt = NULL;
    if (_target.find(target) != _target.end())
    {
        tt = _target[target];
    }
    return tt;
}