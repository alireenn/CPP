/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:24:01 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 12:43:08 by anovelli         ###   ########.fr       */
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

}
