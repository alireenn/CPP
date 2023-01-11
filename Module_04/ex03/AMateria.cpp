/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:24:01 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 17:11:52 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout <<  GREEN "Costructor for " RESET << BOLDGREEN "AMateria" RESET << " called." RESET << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << GREEN "A new materia has been created!" RESET << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
    std::cout <<  GREEN "Copy costructor for AMateria called!" RESET << std::endl;
    *this = rhs;
}

AMateria::~AMateria()
{
    std::cout << BOLDRED "AMateria" RESET << RED " has been destroyed" RESET << std::endl; 
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter &target)
{
    if (this->type == "ice")
        std::cout << CYAN " shoot an ice bolt at  " RESET << BOLDCYAN << target.getName() << RESET << std::endl;
    else if (this->type == "cure")
        std::cout << BLUE "  heals " RESET  << BOLDBLUE << target.getName() << RESET << BLUE "`s wounds *" RESET << std::endl;
    else
        std::cout << "Prrrrrrr!!!!!!!!!!!!!!!" << std::endl;
}


