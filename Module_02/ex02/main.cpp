/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:20:46 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 18:02:28 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*creo due oggetti fixed. Il primo 'a' viene creato usando 
il costruttore predefinito, che lo inizializza a0. Il secondo oggetto 
'b' viene creato usando il costruttore di copia e il risultato di una operazione*/
int main()
{
    Fixed        a;
    Fixed const  b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}