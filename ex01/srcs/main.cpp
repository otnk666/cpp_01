#include "Zombie.hpp"

int main (void)
{
    int size;

    std::string name;

    std::cout << "Please enter the size of horde zombies" << std::endl;
    std::cout << ">";
    std::cin >> size;
    std::cout << "please enter the name of horde zombies" << std::endl;
    std::cin >> name;

    Zombie* horde = zombieHorde(size, name);

    for (int i = 0; i < size; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);

}