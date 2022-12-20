/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:17:40 by alice             #+#    #+#             */
/*   Updated: 2022/12/20 16:21:39 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack( void ) const
{
    if (this->_weapon.getType() != "")
        std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
    else
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}