#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << " atacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}