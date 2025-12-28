#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <string>

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

Zombie* zombieHorde(int N, const std::string& name);

#endif
