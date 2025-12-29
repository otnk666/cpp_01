/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:37:05 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:37:06 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-"
                "special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout <<" cannot believe adding extra bacon costs more money." 
    "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<< std::endl;
}

void Harl::warning(void)
{
    std::cout <<" think I deserve to have some extra bacon for free." 
    "I've been coming for years, whereas you started working here just last month."<< std::endl;
}

void Harl::error(void)
{
    std::cout <<"This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::complain(const std::string& level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*func[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*func[i])();
            return;
        }
    }
}
