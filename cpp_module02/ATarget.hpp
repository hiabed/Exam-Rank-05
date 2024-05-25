#pragma once

#include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
    std::string _type;
public:
    ATarget(const std::string &type);
    ATarget();
    virtual ~ATarget();
    const std::string &getType() const;
    virtual const ATarget *clone() = 0;
    void getHitBySpell(const ASpell& spell) const;
};
