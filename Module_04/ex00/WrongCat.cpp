/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:03:43 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 16:04:19 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << GREEN "Default WrongCat constructor called" RESET<< std::endl;
}

WrongCat::WrongCat(std::string name)
{
    this->type = name;
    std::cout << GREEN "WrongCat name costructor" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
    std::cout <<  GREEN "Copy costructor for WrongCat called." RESET << std::endl;
    *this = rhs;
}

WrongCat::~WrongCat()
{
    std::cout <<  RED "Destructor for WrongCat called." RESET << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << BOLDCYAN "Meow!" RESET << std::endl;
}
