/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:53:31 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 18:54:33 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
/*stesse cose dell'esercizio di prima, vai a vedere ex02 per questa classe*/
class Fixed
{
    private:
        int                 _fixed_p_value;
        static const int    _raw_bit = 8;
    public:
        Fixed(void);
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &rhs);
        Fixed& operator=(const Fixed &rhs);
        ~Fixed();

        float toFloat( void ) const;
        int toInt( void ) const;
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        bool    operator>(const Fixed &rhs) const;
        bool    operator<(const Fixed &rhs) const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<=(const Fixed &rhs) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;

        Fixed   operator+(const Fixed &rhs) const;
        Fixed   operator-(const Fixed &rhs) const;
        Fixed   operator*(const Fixed &rhs) const;
        Fixed   operator/(const Fixed &rhs) const;

        Fixed&  operator++( void );
        Fixed   operator++( int );
        Fixed&  operator--( void );
        Fixed   operator--( int );

        static Fixed& min( Fixed &a, Fixed &b );
        static const Fixed& min( const Fixed &a, const Fixed &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream & operator<<(std::ostream &o, Fixed const & i);

#endif