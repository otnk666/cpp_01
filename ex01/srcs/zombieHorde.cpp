/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:34:53 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:34:54 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name)
{
    Zombie* zombieArr = new Zombie[N];
    for (int i = 0; i < N ; i++)
    {
        zombieArr[i].set_name(name);
    }
    return (zombieArr);
}
