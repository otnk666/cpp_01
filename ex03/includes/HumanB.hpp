#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;
    
    public:
        HumanB(std::string name) : _name(name) ,_weapon(NULL) {}
        void setWeapon(Weapon& weapon);
        void attack();
};