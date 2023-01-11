/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:32:28 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 17:17:38 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout <<  GREEN "Costructor for " RESET << BOLDGREEN "MateriaSource" RESET << " called." RESET << std::endl;
    for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
		for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
    *this = rhs;
    std::cout <<  GREEN "Copy costructor for MateriaSource called!" RESET << std::endl;
}


MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
   	if (this != &rhs)
		for (int i = 0; i < 4; i++)
			this->inventory[i] = rhs.inventory[i];
	return *this;
}
/*
Copia la Materia passata come parametro e la archivia in memoria in modo che possa essere clonata
dopo. Come il Personaggio, la MateriaSource può conoscere al massimo 4 Materia. Essi
non sono necessariamente unici
*/
void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return;
		}
	//int i = 0;
	//int flag = 0;
    //while (this->inventory[i])
	//{
	//	if (!this->inventory[i])
	//	{
	//		flag = 1;
	//		this->inventory[i] = m;
	//		std::cout << BOLDYELLOW << m << RESET << YELLOW " Equiped!" RESET << std::endl;
	//	}
	//}
	//if (flag != 1)
	//	std::cout << "inventory FULL" << std::endl;
}
/*
Restituisce una nuova Materia. Quest'ultima è una copia della Materia precedentemente appresa da
il MateriaSource il cui tipo è uguale a quello passato come parametro. Restituisce 0 se
il tipo è sconosciuto.
*/
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (inventory[i] && inventory[i]->getType() == type)
            return inventory[i];
    return NULL;
}
