#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void set_name(std::string name);
};

Zombie* newZombie(const std::string name);
void    randomChump(const std::string name);

