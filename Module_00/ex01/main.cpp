/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:07:38 by alice             #+#    #+#             */
/*   Updated: 2023/01/05 16:34:01 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <iostream>

int main(void) //non mi servono parametri in input qua
{
    PhoneBook book;
    std::string input = "";
    book.welcome();
    while (input.compare("EXIT"))
    {
        if (input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0)
        { 
            book.printContacts();
            book.search();
        }
        std::cout << "> " << std::flush;
        std::cin >> input;
        if (std::cin.eof())
        {
            break ;
            return (0);
        }
    }
    return (0);
}