/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:25:58 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/05 18:44:05 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    std::string level;
    Harl harl;

    std::cout << "Levels: DEBUG INFO WARNINGS ERROR" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Enter a level:   ";
    std::cin >> level;
    if (std::cin.eof())
        return (0);
    while (level.compare("EXIT"))
    {
        if (std::cin.eof())
            return (1);
        std::cout << "Enter a level:   ";
        std::cin >> level;
        harl.complain(level);
    }
    return(0);
}