/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:34:15 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:34:16 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump(const std::string& name)
{
    Zombie stack_zombie;
    stack_zombie.set_name(name);
    stack_zombie.announce();
}
