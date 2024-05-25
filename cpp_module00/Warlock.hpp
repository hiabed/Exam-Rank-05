#ifndef WARLOCK
#define WARLOCK

#include <string.h>
#include <iostream>

class Warlock
{
private:
    std::string _name;
    std::string _title;
    // Warlock & operator=(Warlock const & rhs);
    // Warlock(Warlock const & obj);
    // Warlock();
public:
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &new_title);
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();
    void introduce() const;
};

// Richard: This looks like another boring day.$
// Richard: I am Richard, Mistress of Magma!$
// Richard - Mistress of Magma$
// Jack: This looks like another boring day.$
// Jack: I am Jack, the Long!$
// Jack: I am Jack, the Mighty!$
// Jack: My job here is done!$
// Richard: My job here is done!$

#endif