/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:39:01 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 12:39:02 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("Alireenn")
{
    std::cout << "DiamondTrap constructor " << this->ClapTrap::_name<< " called" << std::endl;
    this->_Attack_damage = FragTrap::_Attack_damage;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Hit_points = FragTrap::_Hit_points;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(), FragTrap()
{
    this->ClapTrap::_name = name+"_clap_name";
    this->_name = name;
    std::cout << "DiamondTrap constructor " << ClapTrap::_name << " called" << std::endl;
    this->_Attack_damage = FragTrap::_Attack_damage;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Hit_points = FragTrap::_Hit_points;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
{
    std::cout << "copy costructor for DiamondTrap called." << std::endl;
    *this = rhs;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << MAGENTA "DiamondTrap destructor called"  RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
    if (this->_Hit_points <= 0)
		std::cout << this->_name << " is dead." << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->_name << std::endl;
		std::cout << "ClapTrap name: " << this->ClapTrap::_name << std::endl;
	}
}
