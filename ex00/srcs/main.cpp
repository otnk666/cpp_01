#include "Zombie.hpp"

int main(void)
{
    std::string s_name;
    std::string h_name;

    std::cout << "stack zombie\n";
    std::cin >> s_name;

    randomChump(s_name);

    std::cout << "heap zombie\n";
    std::cin >> h_name;
    Zombie* heap_zombie = newZombie(h_name);
    heap_zombie->announce();
    delete heap_zombie;
    return (0);
}