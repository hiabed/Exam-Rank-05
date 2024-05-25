#ifndef WARLOCK
#define WARLOCK

#include <string.h>
#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "SpellBook.hpp"


class Warlock
{
private:
    std::string _name;
    std::string _title;
    SpellBook _SpellBook;
public:
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &new_title);
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();
    void introduce() const;
    void learnSpell(ASpell *spell);
    void forgetSpell(std::string SpellName);
    void launchSpell(std::string SpellName, const ATarget &target);
};

#endif