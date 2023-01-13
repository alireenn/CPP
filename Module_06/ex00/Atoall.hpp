/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Atoall.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:37:55 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/13 11:53:01 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOALL_HPP
#define ATOALL_HPP

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

class Atoall
{
	public:
		Atoall();
        Atoall(const Atoall &rhs);
        virtual ~Atoall();
        Atoall& operator=(const Atoall &rhs);

		void convert(const std::string& input);

};


#endif