/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:22:07 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 12:41:51 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP


#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		;

	protected:
		std::string type;
	
	public:
		Ice();
		Ice(const Ice &ice);
		~Ice();
};


#endif