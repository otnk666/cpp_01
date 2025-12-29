/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:34:25 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:34:26 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce(void);
    void set_name(const std::string& name);
};

Zombie* newZombie(const std::string& name);
void    randomChump(const std::string& name);

#endif
