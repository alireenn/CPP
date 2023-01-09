/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:28:25 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/09 16:45:53 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("alireenn"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "Defautl constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
    return;
}
/*operatore di assegnazione della classe ClapTrap. Viene richiamato quando a un oggetto della classe
ClapTrap viene assegnato il valore di un altro oggetto. Consente di copiare i valori dell'oggetto 
originale nell'oggetto alla sinistra dell'assegnazione.*/
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    this->_name = rhs._name;
    this->_Hit_points = rhs._Hit_points;
    this->_Energy_points = rhs._Energy_points;
    this->_Attack_damage = rhs._Attack_damage;
 
    return *this;
}
/*costruttore di copie della classe ClapTrap. Viene richiamato quando un oggetto della classe ClapTrap
viene creato come copia di un altro oggetto. Inizializza il nuovo oggetto con i valori dell'oggetto originale.*/
ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return;
}
/*Se l'ammontare dei danni subiti è maggiore dei punti salute, viene stampato un messaggio che indica che trap e' morta.
Altrimenti, viene stampato un messaggio in cui si dice che la ClapTrap subisce una certa quantità di danni e
si riducono i punti ferita della ClapTrap della quantità di danni subiti.
*/
void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > _Hit_points)
    {
        std::cout << "ClapTrap " << _name << " died." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage." << std::endl;
    _Hit_points -= amount;
}
/*Se i punti energia della ClapTrap sono inferiori o uguali alla quantità di riparazione, viene stampato un messaggio
che indica che la ClapTrap è senza energia. In caso contrario, viene stampato un messaggio che indica che la ClapTrap
si ripara per un certo numero di punti ferita e riduce i punti energia della ClapTrap di 1. Aumenta inoltre i punti ferita
della ClapTrap dell'importo della riparazione.*/
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Energy_points <= amount)
    {
        std::cout << "ClapTrap " << _name << " does not have enough energy." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " heals by " << amount << " point" << std::endl;
    _Energy_points--;
    _Hit_points += amount;
}
/*consente a un oggetto ClapTrap di attaccare un altro oggetto o entità, specificato dal parametro target.
Se la ClapTrap non ha punti di energia rimanenti, stampa un messaggio sulla console che indica che ha esaurito l'energia.
Altrimenti, stampa un messaggio che indica che sta attaccando il bersaglio e che sta causando una certa quantità di danni
riducendo di 1 i punti energia della ClapTrap.*/
void ClapTrap::attack(const std::string &target)
{
    if (_Energy_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " does not have enough energy" <<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attack with a " << target << " doing " << _Attack_damage << " damage!" << std::endl;
    _Energy_points--;
}
