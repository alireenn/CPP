/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:21:55 by alice             #+#    #+#             */
/*   Updated: 2022/12/20 16:29:34 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//praticamente un copia e incolla di HumanA con qualche ritocchino

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void) const
{
    if (this->_weapon != NULL && this->_weapon->getType() != "")
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}
