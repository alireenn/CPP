/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:26:45 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 11:42:00 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Defautl constructor called" << std::endl;
    this->_Attack_damage = 30;
    this->_Energy_points = 100;
    this->_Hit_points = 100;
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    std::cout << "FragTrap constructor " << this->_name << " called" << std::endl;
    this->_Attack_damage = 30;
    this->_Energy_points = 100;
    this->_Hit_points = 100;
    
}

FragTrap::FragTrap(const FragTrap &rhs)
{
    *this = rhs;
    std::cout << "FragTrap copy constructor called" << std::endl;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << MAGENTA "FragTrap destructor called." RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
std::cout << "FragTrap from ClapTrap " << this->_name << " says: \"HIGH FIVE EVERYONE! :)\"." << std::endl;
}
