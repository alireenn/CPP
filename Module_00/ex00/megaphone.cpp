/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:58:53 by alice             #+#    #+#             */
/*   Updated: 2022/12/14 13:05:17 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*E' buona norma utilizzare std::... 
cout stampa e toupper è come la funzione di libft*/

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";  //se non ho parametri faccio solo la stampa, quindi non entrerà nell'else
	else {
		for (int i = 1; av[i]; i++) {
			for (int j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]); //altrimenti stampo carattere per carattere applicando la funzione per farlo diventare maiuscolo
			if (i < ac - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl; //quindi stampo \n e ritorno 0
	return (0);
}