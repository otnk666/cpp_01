/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:34:45 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:34:46 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
