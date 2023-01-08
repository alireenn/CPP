/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:39:04 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 18:07:01 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Il costruttore predefinito inizializza il membro _fixedPointValue dell'oggetto
su 0. Questa operazione viene eseguita utilizzando un elenco di inizializzazione,
ovvero un elenco di inizializzatori di membri che appare dopo i due punti nella dichiarazione del costruttore.*/
Fixed::Fixed(void) : _fixedPointValue(0){}
/*Il costruttore inizializza il membro _fixedPointValue dell'oggetto usando un elenco di 
inizializzazione. Il valore di n viene spostato a sinistra di _raw_bit bit utilizzando 
l'operatore di spostamento a sinistra bit per bit , che ha l'effetto di moltiplicare 
n per 2 elevato alla potenza di _raw_bit.*/
Fixed::Fixed(const int n): _fixedPointValue( n << _raw_bit){
    /*Il valore di _raw_bit è un membro const statico della classe Fixed e specifica il 
    numero di bit usati per rappresentare la parte frazionaria del valore a virgola fissa.
    Lo spostamento di n a sinistra di _raw_bit bit moltiplica effettivamente n per il valore di 2 elevato alla potenza 
    di _raw_bit, che è il fattore di conversione da intero a virgola fissa.*/
}

Fixed::Fixed(const Fixed &rhs){
	*this = rhs;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if(this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}
//distruttore
Fixed::~Fixed(){}
// getter e setter
int Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

int Fixed::toInt( void ) const
{
	return this->_fixedPointValue >>_raw_bit;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->getRawBits()) / (1 << _raw_bit);
}
/*La funzione restituisce un riferimento all'oggetto del flusso di output o, 
che consente di concatenare istruzioni di output utilizzando l'operatore.*/
std::ostream & operator<<(std::ostream &o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}
/*Come detto nel file hpp servono per confontare oggetti fixed tra loro ed eseguire 
operazioni aritmetiche nonche usare ++ e --*/
bool Fixed::operator>(const Fixed &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}
/*La prima funzione op++ è la versione del prefisso di operator++, che incrementa il valore
dell'oggetto prima di restituire un riferimento all'oggetto.
Non accetta argomenti e restituisce un riferimento all'oggetto.
la seconda incrementa il valore dell'oggetto dopo aver restituito una copia del valore
originale dell'oggetto. Accetta un argomento intero (che non viene utilizzato) e 
restituisce una copia dell'oggetto.*/
Fixed&	Fixed::operator++(void)
{
	++this->_fixedPointValue;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._fixedPointValue = this->_fixedPointValue++;
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	--this->_fixedPointValue;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._fixedPointValue = this->_fixedPointValue--;
	return tmp;
}

/*La prima funzione accetta due riferimenti a oggetti non const.
La seconda la stessa cosa ma a due oggetti const.
Entrambe le funzioni restituiscono un riferimento a un oggetto Fixed e vengono
utilizzate per trovare il valore massimo tra a e b.
All'interno della funzione, la funzione membro getRawBits viene chiamata su a e b per 
ottenere i loro valori di bit. I valori dei bit vengono quindi confrontati usando maggiore*/
Fixed& Fixed::max( Fixed &a, Fixed &b )
{
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
	if ( a.getRawBits() > b.getRawBits() )
		return a;
	return b;
}
/*min la stessa cosa di max ma ritorna un riferimento al valore minimo*/
Fixed& Fixed::min( Fixed &a, Fixed &b )
{
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
	if ( a.getRawBits() < b.getRawBits() )
		return a;
	return b;
}