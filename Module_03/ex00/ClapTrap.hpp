/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:21:41 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/09 16:36:09 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _Hit_points; //health
        unsigned int _Energy_points;
        unsigned int _Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &rhs);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &rhs);

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void attack(const std::string& target);
};


#endif