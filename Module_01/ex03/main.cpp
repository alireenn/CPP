/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:29:42 by alice             #+#    #+#             */
/*   Updated: 2023/01/05 16:55:48 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
        Weapon Gun = Weapon("Gun");
        HumanA Ray("Ray", Gun);
        Ray.attack();
        Gun.setType("Some other type of weapon");
        Ray.attack();

        Weapon Beauty = Weapon("Beauty");
        HumanB Wisp("Wisp");
        Wisp.setWeapon(Beauty);
        Wisp.attack();
        Beauty.setType("some other weapons");
        Wisp.attack();
}
