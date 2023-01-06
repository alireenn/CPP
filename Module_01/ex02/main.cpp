/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:49:20 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/06 18:01:36 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr;
	std::string &ref = str;

	ptr = &str;
	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl << std::endl;

	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}