/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:41:32 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 17:18:31 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{  
    std::cout <<  GREEN "Costructor for " RESET << BOLDGREEN "Ice" RESET << " called." RESET << std::endl;
}

Ice::~Ice()
{
    std::cout << BOLDRED "Ice" RESET << RED " has been destroyed" RESET << std::endl; 
}

Ice::Ice(std::string const &type)
{
    this->type = type;
    std::cout << GREEN "Ice has been created!" RESET << std::endl;
}

Ice::Ice(const Ice &rhs)
{
    std::cout <<  GREEN "Copy Costructor for " RESET << BOLDGREEN "Ice" RESET << GREEN " called." RESET << std::endl;
    *this = rhs;
}

Ice &Ice::operator=(const Ice &rhs)
{
    if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}
