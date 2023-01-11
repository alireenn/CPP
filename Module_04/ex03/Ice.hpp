/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:22:07 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 16:22:20 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP


#include "AMateria.hpp"

class Ice : public AMateria
{
	protected:
		std::string type;
	public:
        Ice();
        ~Ice();
        Ice(const Ice &rhs); //costruttore di copie
        Ice(std::string const &type);
        Ice& operator=(const Ice &rhs);

        virtual AMateria* clone() const;
};


#endif