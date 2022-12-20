/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:29:42 by alice             #+#    #+#             */
/*   Updated: 2022/12/20 16:40:03 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
        Weapon club = Weapon("Gun");
        HumanA Ray("Ray", club);
        Ray.attack();
        club.setType("Some other type of weapon");
        Ray.attack();

        Weapon club = Weapon("Beauty");
        HumanB Wisp("Wisp");
        Wisp.setWeapon(club);
        Wisp.attack();
        club.setType("some other weapons");
        Wisp.attack();
}
