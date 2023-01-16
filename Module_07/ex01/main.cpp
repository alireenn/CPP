/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:47:45 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/16 11:21:34 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string strings[] = {"One", "Two", "Three", "Four"};

	std::cout << "Normal: " << std::endl;
	iter(strings, 4, turbo_print<std::string>);

	float floats[] = {1.23, 4.56, 7.89};
	std::cout << "Floats: " << std::endl;
	iter(floats, 3, turbo_print<float>);

	char chars[] = {'c', 'h', 'a', 'r'};
	std::cout << "String: " << std::endl;
	iter(chars, 4, turbo_print<char>);
}