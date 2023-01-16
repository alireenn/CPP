/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:27:57 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/16 15:06:17 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int ac, char **av)
{
    if ( ac != 2 )
	{
		std::cout << "Bad Usage." << std::endl;
        return 1;
	}

	std::cout << av[1] << std::endl; 
    int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int>vect(arr,arr + sizeof(arr) / sizeof(int));
    std::list<int>list(arr,arr + sizeof(arr) / sizeof(int));

    easyfind(vect, std::atoi(av[1]));
    easyfind(list, std::atoi(av[1]));

    return 0;
}