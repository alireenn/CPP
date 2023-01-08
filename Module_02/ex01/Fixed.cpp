/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:22:11 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 16:48:21 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): _fixedValue( n << _bit)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): _fixedValue(roundf(n *(1 << _bit)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if(this != &rhs)
		this->_fixedValue = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->_fixedValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

int Fixed::toInt( void ) const
{
	return this->_fixedValue >>_bit;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _bit);
}
/*Si tratta di una funzione operatore in overload che può essere
utilizzata per restituire un oggetto Fixed a un flusso, ad esempio std::cout.
Accetta un riferimento a un oggetto flusso di output o e un riferimento a 
un oggetto fisso costante i.
La funzione restituisce un riferimento 
all'oggetto del flusso di output o, che consente di
concatenare istruzioni di output utilizzando l'operatore.*/
std::ostream & operator<<(std::ostream &o, Fixed const & i)
{
	/*convertire il valore a virgola fissa in un valore a virgola mobile. Il valore in virgola mobile
	risultante viene quindi inviato allo stream o utilizzando l'operatore.*/
	o << i.toFloat();
	return o;
}
