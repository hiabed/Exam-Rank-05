#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
}

SpellBook::SpellBook(const SpellBook &other)
{
    *this = other;
}

SpellBook & SpellBook::operator=(const SpellBook &other)
{
    _SpellBook = other._SpellBook;
    return *this;
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
    {
        _SpellBook[spell->getName()] = spell->clone();
    }
}

void SpellBook::forgetSpell(std::string const &spell)
{
    std::map <std::string, ASpell *>::iterator it = _SpellBook.find(spell);
    if (it != _SpellBook.end())
    {
        _SpellBook.erase(spell);
    }
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    ASpell *new_spell = NULL;
    if (_SpellBook.find(spell) != _SpellBook.end())
    {
        new_spell = _SpellBook[spell];
    }
    return new_spell;
}