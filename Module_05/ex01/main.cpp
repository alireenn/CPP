/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:12:04 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 13:50:14 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
	Bureaucrat				john("John", 1);
	Bureaucrat				shrub("cozy", 120);
	Form					build("Robottino", 119, 119);

	std::cout << build << std::endl;

	build.SignedForm(shrub);
	build.SignedForm(john);

	std::cout << build << std::endl;
	return (0);
}