#include "ATarget.hpp"

const std::string &ATarget::getType() const
{
    return _type;
}

ATarget::ATarget()
{
}

ATarget::ATarget(const std::string &type)
{
    _type = type;
}

ATarget::~ATarget()
{
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << "!\n";
}
