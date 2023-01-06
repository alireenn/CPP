/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:43:36 by alice             #+#    #+#             */
/*   Updated: 2023/01/06 16:10:27 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

int main(void)
{
    std::string name;

    std::cout << "Creating zombie on the stack." << std::endl; //sullo stack perchè non alloco
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    if (std::cin.eof())
        return (1);
    Zombie zombi1(name); //non alloco
    
    std::cout << "Creating zombie on the heap." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    if (std::cin.eof())
        return (1);
    Zombie *zombi2 = newZombie(name); //con new zombie uso la funzione new che alloca e chiama il costruttore
    zombi2->announce();
    delete zombi2;

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("Luna");
    return 0;
}