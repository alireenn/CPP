/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:11:34 by alice             #+#    #+#             */
/*   Updated: 2022/12/14 19:03:41 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}


std::string Contact::_getInput(std::string str) const //ritorna una stringa
{
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input); 
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear(); //mette a 0 tutti i flag di errore dello stream
            std::cout << "Invalid input" << std::endl;
        }
    } while (!valid);
    return (input);
}

void    Contact::init(void)
{
    std::cin.ignore();
    this->_firstName = this->_getInput("Enter you first name: ");
    this->_lastName = this->_getInput("Enter your last name: ");
    this->_nickname = this->_getInput("Enter your nickname: ");
    this->_phoneNumber = this->_getInput("Enter your phone number: ");
    this->_darkestSecret = this->_getInput("Enter your darkest secret: ");
    std::cout << std::endl;
}

std::string Contact::_printLen(std::string str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::setIndex(int i)
{
    this->_index = i;
}

void    Contact::view(int index) const
{
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << index << " " << std::flush;
    std::cout << this->_printLen(this->_firstName) << " " << std::flush;
    std::cout << this->_printLen(this->_lastName) << " " << std::flush;
    std::cout << this->_printLen(this->_nickname) << " " << std::flush;
    std::cout << std::endl;
}

void    Contact::display(int index) const
{
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << std::endl;
}
