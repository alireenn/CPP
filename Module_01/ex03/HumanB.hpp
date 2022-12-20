/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:16:33 by alice             #+#    #+#             */
/*   Updated: 2022/12/20 16:16:59 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanB( std::string name );
        ~HumanB();

        void    attack( void ) const;
        void    setWeapon( Weapon& weapon );
};