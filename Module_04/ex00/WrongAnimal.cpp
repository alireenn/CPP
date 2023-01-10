/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:02:08 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 16:02:53 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << GREEN "Default WrongAnimal constructor called" RESET<< std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
    this->type = name;
    std::cout << GREEN "WrongAnimal name costructor" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
    std::cout <<  GREEN "Copy costructor for WrongAnimal called." RESET << std::endl;
    *this = rhs;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<  RED "Destructor for WrongAnimal called." RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if(this != &rhs)
		this->type = rhs.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << BOLDCYAN  "Makesound WrongAnimal called" RESET << std::endl;
}

std::string WrongAnimal::getType()const 
{
    return (this->type);
}
