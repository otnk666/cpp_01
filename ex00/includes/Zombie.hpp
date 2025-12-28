#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void set_name(const std::string& name);
};

Zombie* newZombie(const std::string& name);
void    randomChump(const std::string& name);

#endif
