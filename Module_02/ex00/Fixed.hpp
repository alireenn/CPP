/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:38:39 by alice             #+#    #+#             */
/*   Updated: 2023/01/09 12:35:48 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*Un numero a virgola fissa è una rappresentazione 
numerica in cui è fisso il numero di cifre dopo la virgola. 
Ciò può essere utile per rappresentare valori frazionari quando l'intervallo di
valori possibili è limitato e la precisione richiesta non è troppo elevata.*/

class Fixed
{
    /*La classe ha un membro privato _fixed_p_value che memorizza il valore a 
    virgola fissa come numero intero e un membro const statico _raw_bit che memorizza il 
    numero di bit utilizzati per rappresentare la parte frazionaria del valore.*/
    private:
        int              _fixedValue;
        static const int _rawBit = 8;
    public:
    // Constructors
        Fixed();
        Fixed(const Fixed &src);
    // Overloaded Operators
        Fixed& operator=(const Fixed &src);
    // Deconstructors 
        ~Fixed();
    // Functions
        int getRawBits(void) const;
        void setRawBits(int const raw);
};