/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:26:17 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 15:59:02 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual void unequip(int idx) = 0;
        virtual void equip(AMateria* m) = 0;
        virtual std::string const &getName() const = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif