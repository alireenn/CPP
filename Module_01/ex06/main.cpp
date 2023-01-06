/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:48:06 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/06 16:26:00 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    std::string level;
    Harl harl;

    std::cout << "Levels: DEBUG INFO WARNING ERROR EXIT" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Enter a level:   ";
    std::cin >> level;
    if (std::cin.eof())
        return (0);
    while (level.compare("EXIT"))
    {
        harl.complain(level);
        std::cout << "Enter a level:   ";
        std::cin >> level;
        if (std::cin.eof())
            return (1);
    }
    return(0);
}