/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:48:19 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/16 11:19:44 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T* address, size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		(*f)(address[i]);
}

template <typename T>
void turbo_print(const T& c)
{
	std::cout << c << std::endl;
}