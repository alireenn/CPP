/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:09:03 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 16:15:40 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
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
    std::cout <<  RED "Destructor for Cat called." RESET << std::endl;
}

void Cat::makeSound() const
{
    std::cout << BOLDCYAN "Wrong Meow!" RESET << std::endl;
}
