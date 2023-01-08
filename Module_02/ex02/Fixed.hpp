/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:51:27 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 17:08:13 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    /*Possiamo definire i membri della classe statici usando la parola chiave statica.
    Quando dichiariamo un membro di una classe come statico significa non importa quanti oggetti della classe vengono creati,
    esiste una sola copia del membro statico.
    Un membro statico è condiviso da tutti gli oggetti della classe. Tutti i dati statici vengono inizializzati su zero
    quando viene creato il primo oggetto, se non è presente nessun'altra inizializzazione. Non possiamo inserirlo nel
    definizione di classe ma può essere inizializzato all'esterno dichiarando nuovamente la variabile statica,
    utilizzando l'operatore di risoluzione dell'ambito :: per identificare a quale classe appartiene.*/
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;
/*La classe ha diversi costruttori che consentono di creare un oggetto
fisso in modi diversi. Esiste un costruttore predefinito che crea un oggetto 
con un valore pari a 0, un costruttore che accetta un valore intero, un costruttore 
che accetta un valore a virgola mobile e un costruttore di copie che crea un nuovo oggetto come copia di un oggetto esistente.*/
    public:
        Fixed( void );
        Fixed( const int n );
        Fixed( const float n );
        Fixed( const Fixed &rhs );
        Fixed& operator=( const Fixed &rhs );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
    /*
    per convertire un punto mobile in un punto fisso moltiplichiamo il numero float
    con la base elevata alla potenza di n (n la dimensione della parte frazionaria)
    per fare il contrario ci dividiamo
    */
        float   toFloat( void ) const;
        int     toInt( void ) const;
    /*
    IMPORTANTE:
    
    La classe ha diverse funzioni di operatore in overload che consentono di 
    confrontare oggetti Fixed ed eseguire operazioni aritmetiche su di essi. 
    Dispone inoltre di funzioni operator++ e operator-- che consentono di incrementare 
    e decrementare un oggetto Fixed.
    ha diverse funzioni membro statiche che consentono di trovare il valore minimo o massimotra due oggetti Fixed.
    La classe dispone anche di una funzione operatore di overload che consente
    di generare un oggetto Fixed in un flusso, ad esempio std::cout.
    */
        bool    operator>( const Fixed &rhs ) const ;
        bool    operator<( const Fixed &rhs ) const ;
        bool    operator>=( const Fixed &rhs ) const ;
        bool    operator<=( const Fixed &rhs ) const ;
        bool    operator==( const Fixed &rhs ) const ;
        bool    operator!=( const Fixed &rhs ) const ;

        Fixed   operator+( const Fixed &rhs ) const ;
        Fixed   operator-( const Fixed &rhs ) const ;
        Fixed   operator*( const Fixed &rhs ) const ;
        Fixed   operator/( const Fixed &rhs ) const ;

        Fixed&  operator++( void ); // prefix
        Fixed   operator++( int ); // postfix
        Fixed&  operator--( void ); // prefix
        Fixed   operator--( int ); // postfix

        static Fixed& min( Fixed &a, Fixed &b );
        static const Fixed& min( const Fixed &a, const Fixed &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( const Fixed &a, const Fixed &b );

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif 