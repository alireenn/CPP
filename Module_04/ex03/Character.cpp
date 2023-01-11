/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:23:30 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 17:19:21 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->slot[i] = NULL;
	std::cout <<  GREEN "Costructor for " RESET << BOLDGREEN "Character" RESET << " called." RESET << std::endl;
}

Character::~Character()
{
	std::cout << BOLDRED "Character" RESET << RED " has been destroyed" RESET << std::endl; 
}

Character::Character(const Character &rhs)
{
	std::cout <<  GREEN "Copy costructor for Character called!" RESET << std::endl;
	*this = rhs;
}

Character::Character(std::string const name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->slot[i] = NULL;
	std::cout << GREEN "A new Character has been created!  " RESET  << BOLDGREEN << name << RESET << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->slot[i] = rhs.slot[i];
	}
	return *this;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->slot[i] == NULL)
		{
			this->slot[i] = m;
			std::cout << BOLDYELLOW << m->getType() << RESET << YELLOW " Equiped!" RESET << std::endl;
			return;
		}
	std::cout << BOLDYELLOW "Character " RESET << this->_name << YELLOW " can't equip "  RESET << BOLDYELLOW << m->getType() << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (this->slot[idx] != NULL)
	{
		this->slot[idx] = NULL;
		std::cout << this->slot[idx]->AMateria::getType() << " Unequiped." << std::endl;
	}
	else
		std::cout << "Empty slot" << std::endl;
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::use(int idx, ICharacter &target)
{
	if (this->slot[idx])
	{
		std::cout << MAGENTA << getName() << RESET;
		this->slot[idx]->use(target);
	}
	else 
		std::cout << "U don't have this materia" << std::endl;
}
