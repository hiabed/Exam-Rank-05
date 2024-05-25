#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
{
    _name = name;
    _title = title;
    std::cout << _name <<  ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!\n";
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

const std::string &Warlock::getName() const
{
    return _name;
}

const std::string &Warlock::getTitle() const
{
    return _title;
}

void Warlock::setTitle(const std::string &new_title)
{
    _title = new_title;
}

void Warlock::learnSpell(ASpell *spell)
{
    if(spell)
    {
        if (_SpellsBook.find(spell->getName()) == _SpellsBook.end())
            _SpellsBook[spell->getName()] = spell->clone();
    }
}

void Warlock::forgetSpell(std::string SpellName)
{
    if (_SpellsBook.find(SpellName) != _SpellsBook.end())
        _SpellsBook.erase(_SpellsBook.find(SpellName));
}

void Warlock::launchSpell(std::string SpellName, const ATarget &target)
{
    if (_SpellsBook.find(SpellName) != _SpellsBook.end())
        _SpellsBook[SpellName]->launch(target);
}