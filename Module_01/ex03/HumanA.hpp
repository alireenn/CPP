/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:15:45 by alice             #+#    #+#             */
/*   Updated: 2022/12/20 16:17:23 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;
        HumanA();               //costruttore di copie

    public:
        HumanA( std::string name, Weapon& weapon );
        ~HumanA();

        void    attack( void ) const;
};
