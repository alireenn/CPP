/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:11:39 by alice             #+#    #+#             */
/*   Updated: 2023/01/05 16:40:32 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}


void PhoneBook::welcome(void)
{
    std::cout << "Welcome to this ugly PhoneBook" << std::endl;
    std::cout << "You can use me in this way: " << std::endl;
    std::cout << "ADD\t: To add a contact;" << std::endl;
    std::cout << "SEARCH\t: To search for a contact;" << std::endl;
    std::cout << "EXIT\t: to quite the PhoneBook;" << std::endl;
    std::cout << "Thanks for your attention." << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::addContact(void)
{
    static int  i;
    this->_contacts[i % 8].init(); //i contatti sono 8
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}

void    PhoneBook::printContacts(void)
{
    std::cout << " PHONEBOOK CONTACTS " << std::endl;
    for (size_t i = 0; i < 8; i++) {
        this->_contacts[i].view(i);
    }
    std::cout << std::endl;
}

int	PhoneBook::_readInput()
{
	int		input;
	bool	valid = false;

	do //un ciclo lo fa a prescindere
	{
		std::cout << "Enter Index: " << std::flush; //" Alcuni dicono "svuotare il buffer"
		std::cin >> input;
        if (std::cin.eof())
            return (0);
		if (std::cin.good() && input >= 0) //good controlla se sono state settate flag di errore
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid index" << std::endl;
		}
	} while (!valid);
	return(input);
}

void    PhoneBook::search(void)
{
    int i;
    i = this->_readInput();
    this->_contacts[i].display(i);
}