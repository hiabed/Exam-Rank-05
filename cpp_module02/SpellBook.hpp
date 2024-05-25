#pragma once 

#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
    SpellBook(const SpellBook &other);
    SpellBook &operator=(const SpellBook &other);
    std::map<std::string, ASpell *> _SpellBook;
public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell* spell);
    void forgetSpell(std::string const &spell);
    ASpell* createSpell(std::string const &spell);
};