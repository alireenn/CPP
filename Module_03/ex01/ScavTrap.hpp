/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:11:00 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/09 18:19:24 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


/*In questo modo, la classe erediterà tutti i membri 
pubblici e protetti di ClapTrap. Potrai anche aggiungere nuovi membri 
o ridefinire i membri ereditati nella classe derivata.*/
class ScavTrap : public ClapTrap
{
    private:
        
    public:
    ScavTrap();
    ScavTrap(std::string name);
	ScavTrap(const ScavTrap &rhs);
    ~ScavTrap();
    
    void attack(const std::string& target);
    void guardGate();
};


#endif