/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:37:46 by skomatsu          #+#    #+#             */
/*   Updated: 2025/12/29 17:37:47 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return (1);
    }

    Harl harl;
    std::string level = argv[1];
    harl.harlFilter(level);
    return (0);
}
