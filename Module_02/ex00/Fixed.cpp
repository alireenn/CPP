/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:38:43 by alice             #+#    #+#             */
/*   Updated: 2023/01/09 12:36:36 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
}

/*In questo caso, il costruttore di copie inizializza 
il nuovo oggetto chiamando la funzione setRawBits su questo 
oggetto e passando il valore di _fixedPointValue di rhs ottenuto
utilizzando la funzione membro getRawBits... odio cpp*/
Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(rhs.getRawBits());
}
/*Questo è l'operatore di 
assegnazione di copia per una classe chiamata Fixed.
Questo operatore consente di assegnare un oggetto fisso 
a un altro utilizzando l'operatore di assegnazione = */
Fixed &Fixed::operator=(const Fixed &rhs)
{
	/*Questo per impedire l'autoassegnazione, 
	che causerebbe l'assegnazione dell'oggetto a se stesso.*/
    std::cout << "Copy assignment operator called" << std::endl;
	if(this != &rhs)
		this->_fixedValue = rhs.getRawBits();
	/*Questo è l'operatore di assegnazione di 
	copia */
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
/*soliti getter e setter*/
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}