/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:53:46 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 11:48:21 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << GREEN "Default Animal constructor called" RESET<< std::endl;
}

Animal::Animal(std::string name)
{
    this->type = name;
    std::cout << GREEN "Animal name costructor" RESET << std::endl;
}

Animal::Animal(const Animal &rhs)
{
    std::cout <<  GREEN "Copy costructor for Animal called." RESET << std::endl;
    *this = rhs;
}

Animal::~Animal()
{
    std::cout <<  RED "Destructor for Animal called." RESET << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if(this != &rhs)
		this->type = rhs.type;
	return *this;
}

void Animal::makeSound() const
{
    std::cout << BOLDCYAN  "Makesound Animal called" RESET << std::endl;
}

std::string Animal::getType()const 
{
    return (this->type);
}
