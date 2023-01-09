/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:54:37 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/09 18:12:39 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap alireenn("alireenn");
    ScavTrap alireenn2(alireenn);

    alireenn.attack("the air");
    alireenn.takeDamage(10) ;
    alireenn.beRepaired(10);
    alireenn.guardGate();

    return 0;
}