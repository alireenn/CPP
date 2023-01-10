/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:26:07 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 11:42:38 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("alireenn")
{
    std::cout << "ScavTrap Defautl constructor called" << std::endl;
    this->_Attack_damage = 20;
    this->_Energy_points = 50;
    this->_Hit_points = 100;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap " << _name << " created" << std::endl;
    this->_name = name;
    this->_Attack_damage = 20;
    this->_Energy_points = 50;
    this->_Hit_points = 100;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
    *this = rhs;
    std::cout << "ScavTrap copy constructor called" << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << MAGENTA "ScavTrap destructor called" RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_Energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " does not have enough energy" <<std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attack with a " << target << " doing " << this->_Attack_damage << " damage!" << std::endl;
    this->_Energy_points--;
}

void ScavTrap::guardGate()
{
    std::cout << "< ScavTrap > - " << this->_name << " is now in Gate keeper mode." << std::endl;
}


