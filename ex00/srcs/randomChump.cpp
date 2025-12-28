#include "Zombie.hpp"

void    randomChump(const std::string& name)
{
    Zombie stack_zombie;
    stack_zombie.set_name(name);
    stack_zombie.announce();
}
