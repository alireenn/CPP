/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:07:47 by alice             #+#    #+#             */
/*   Updated: 2022/12/19 18:35:01 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{  
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();
		void    announce( void );
		void    setName( std::string name );
};
		Zombie* zombieHorde(int n, std::string name);

#endif
