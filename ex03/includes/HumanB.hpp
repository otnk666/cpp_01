#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanB(const std::string& name) : _name(name) ,_weapon(NULL) {}
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif
