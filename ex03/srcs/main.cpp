/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:35:40 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:35:41 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
