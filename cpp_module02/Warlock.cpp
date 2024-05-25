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

void Warlock::learnSpell(ASpell* spell)
{
	_SpellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string SpellName)
{
    _SpellBook.forgetSpell(SpellName);
}

void Warlock::launchSpell(std::string SpellName, const ATarget &target)
{
    if (_SpellBook.createSpell(SpellName))
        _SpellBook.createSpell(SpellName)->launch(target);
}