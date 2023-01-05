/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:16:49 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/05 18:45:52 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn\’t put enough bacon in my burger! If you did, I wouldn\’t be asking for more!" << std::endl
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I\’ve been coming for years whereas you started working here since last month." << std::endl
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl
}


void Harl::complain(std::string level)
{
    std::string levels {} = ["DEBUG", "INFO", "WARNING", "ERROR"];
    functions func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;

    while (i < 4 && levels[i].compare(level))
        i++;
    if (i < 4)
        (this->*func[i])();

}
