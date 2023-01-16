/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:28:10 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/16 14:35:06 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void easyfind(T& cont, int i)
{
	if (std::find(cont.begin(), cont.end(), i) != cont.end())
		std::cout << "Found!" << std::endl;
	else
		std::cout << "Not found..." << std::endl;
}