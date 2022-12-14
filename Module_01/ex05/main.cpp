/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:25:58 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/06 17:58:33 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    std::string level;
    Harl harl;

    std::cout << "Levels: DEBUG INFO WARNING ERROR" << std::endl;
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