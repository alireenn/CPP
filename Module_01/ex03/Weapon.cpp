/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:11:31 by alice             #+#    #+#             */
/*   Updated: 2022/12/20 16:33:06 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

Weapon::~Weapon()
{
}

void    Weapon::setType(std::string newType)
{
    this->_type = newType;
}

std::string  &Weapon::getType( )
{
    return this->_type;
}
