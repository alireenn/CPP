/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:03:22 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 16:50:02 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    brain = new Brain();
    std::cout << GREEN "Default Dog Brain constructor called" RESET<< std::endl;
    std::cout << GREEN "Default Dog constructor called" RESET<< std::endl;
}

Dog::Dog(std::string name)
{
    this->type = name;
    std::cout << GREEN "Dog name costructor" RESET << std::endl;
}

Dog::Dog(const Dog &rhs)
{
    std::cout <<  GREEN "Copy costructor for Dog called." RESET << std::endl;
    *this = rhs;
}

Dog::~Dog()
{
    delete brain;
    std::cout <<  RED "Destructor for Brain Dog called." RESET << std::endl;
    std::cout <<  RED "Destructor for Dog called." RESET << std::endl;
}

void Dog::makeSound() const
{
    std::cout << BOLDCYAN  "Woof!" RESET << std::endl;
}
