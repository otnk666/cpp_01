#include "Weapon.hpp"

Weapon::~Weapon()
{
    std::cout << "Destructor called: weapon" << std::endl;
}

void Weapon::setType(const std::string& type)
{
    this->_type = type;
}

const std::string& Weapon::getType() const
{
    return (this->_type);
}
