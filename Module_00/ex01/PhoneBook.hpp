/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:09:50 by alice             #+#    #+#             */
/*   Updated: 2022/12/14 13:57:50 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP //come c

#include "Contact.hpp"

class PhoneBook //creazione della classe
{
    private:
        Contact     _contacts[8];
        int         _readInput(void);
    public:
        void    addContact(void);
        void    printContacts(void);
        void    search(void);
        void    welcome(void);
};

#endif // PHONEBOOK_HPP