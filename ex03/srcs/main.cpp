#include "HumanA.hpp"
#include "HumanB.hpp"

int main (void)
{
    Weapon gun("gun");
    HumanA bob("bob", gun);
    HumanB john("john");

    bob.attack();
    john.attack();

    john.setWeapon(gun);
    john.attack();
    return (0);
}
