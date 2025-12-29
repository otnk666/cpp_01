/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:35:34 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:35:35 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon){}

HumanA::~HumanA()
{}


void HumanA::attack(void)
{
    std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
}
