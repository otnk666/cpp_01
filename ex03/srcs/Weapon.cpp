/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:35:43 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:35:44 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
