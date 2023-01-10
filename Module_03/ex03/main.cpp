/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:04:21 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 13:21:52 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
PARADOSSO DEL DIAMANTE:
     D
    /\
   A  B
   \  /
    C

Il problema si presenta quando una classe derivata eredita da due o più classi base che a loro volta ereditano da
una classe comune. Questa situazione può creare ambiguità e comportamenti imprevisti nel codice.

Per evitare il paradosso del diamante, si può utilizzare l'ereditarietà multipla virtuale, in questo modo quando
una classe eredita da più di una classe base, solo una delle classi base sarà effettivamente utilizzata.

*/
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap DD;
    DiamondTrap d("DiamondTrap");
    DiamondTrap a(d);
    ScavTrap s("ScavTrap");

    d.attack("alice"); // calls the ScavTrap's attack() method
    d.FragTrap::attack("ciao"); // calls the FragTrap's attack() method
    s.beRepaired(10);
    DD.highFivesGuys();
    a.guardGate();
    d.whoAmI();

    return 0;
}