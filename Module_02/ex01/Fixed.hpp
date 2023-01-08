/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:21:03 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 15:29:48 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int                 _fixedValue;
	static const int    _bit = 8;
public:
	Fixed(void);
    /*A constructor that takes a constant integer as a parameter.
    It converts it to the corresponding fixed-point value. The fractional bits value is
    initialized to 8 like in exercise 00.*/
	Fixed(const int n);
    /*A constructor that takes a constant floating-point number as a parameter.
    It converts it to the corresponding fixed-point value.*/
	Fixed(const float n);
	Fixed(const Fixed &rhs);
	Fixed& operator=(const Fixed &rhs); //operatore di assegnazione
	~Fixed();
    /*converts the fixed-point value to a floating-point value*/
	float toFloat( void ) const;
    /*converts the fixed-point value to an integer value.*/
	int toInt( void ) const;
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream &o, Fixed const & i);

#endif