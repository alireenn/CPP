/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:12:35 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 12:42:29 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#define RESET       "\033[0m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"
#define LAMPRED "\033[5;31;40m"
#define LAMPGREEN "\033[5;36;40m"
#define LAMPYELLOW "\033[5;36;40m"
#define LAMPBLUE "\033[5;36;40m"
#define LAMPMAGENTA "\033[5;36;40m"
#define LAMPCYAN "\033[5;36;40m"
#define LAMPWHITE "\033[5;36;40m"

class AMateria
{

        protected: 
                std::string type;
        public:
                AMateria();
                ~AMateria();
                AMateria(const AMateria &rhs); //costruttore di copie
                AMateria(std::string const &type);
                AMateria& operator=(const AMateria &rhs);

                std::string const &getType() const; //Returns the materia type
                virtual AMateria* clone() const = 0;
                virtual void use(ICharacter& target);
};


#endif