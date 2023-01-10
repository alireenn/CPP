/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:09:03 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 17:59:43 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    brain = new Brain();
    std::cout << GREEN "Default Cat Brain constructor called" RESET<< std::endl;
    std::cout << GREEN "Default Cat constructor called" RESET<< std::endl;
}

Cat::Cat(std::string name)
{
    this->type = name;
    std::cout << GREEN "Cat name costructor" RESET << std::endl;
}

Cat::Cat(const Cat &rhs)
{
    std::cout <<  GREEN "Copy costructor for Cat called." RESET << std::endl;
    *this = rhs;
}

Cat::~Cat()
{
    delete brain;
    std::cout <<  RED "Destructor for Brain Cat called." RESET << std::endl;
    std::cout <<  RED "Destructor for Cat called." RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << BOLDCYAN "Wrong Meow!" RESET << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if(this != &rhs)
		this->type = rhs.type;
	return *this;
}

