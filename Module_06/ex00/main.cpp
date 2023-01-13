/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:47:35 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/13 15:13:56 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Atoall.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: no parameters\n" << "Usage: <program> <literal>" << std::endl;
		return 1;
	}
	
	Atoall a;
	a.convert(argv[1]);
}