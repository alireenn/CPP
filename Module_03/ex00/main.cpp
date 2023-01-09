/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:33:33 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/09 16:44:24 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap clap;
    ClapTrap trap(clap);
    ClapTrap claptrap("DanDanDan");

    claptrap.attack("Staff");
    trap.takeDamage(5);
    trap.beRepaired(5);
    return(0);
}