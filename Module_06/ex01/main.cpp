/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:06:38 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/13 13:20:08 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string uauuuu;
	int			auaaaa;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast <uintptr_t >(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data *>(raw));
}

int main(void)
{
	Data *hello = new Data;
	hello->auaaaa = 42;
	hello->uauuuu = "quarantadue";

	std::cout << "BEFORE: " << std::endl;
	std::cout << hello->auaaaa << std::endl;
	std::cout << hello->uauuuu << std::endl;

	std::cout << "AFTER: " << std::endl;
	uintptr_t serial = serialize(hello);
	std::cout << "SERIALIZE " << serialize(hello) << std::endl;
	std::cout << "DESERIALIZE " << deserialize(serial) << std::endl;
}