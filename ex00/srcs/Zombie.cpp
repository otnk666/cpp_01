#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed" << std::endl;
}

void    Zombie::set_name(const std::string& name)
{
    this->_name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
