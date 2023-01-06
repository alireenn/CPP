/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:10:02 by alice             #+#    #+#             */
/*   Updated: 2023/01/06 16:41:54 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n;
    std::string name;

    std::cout << "How many zombies do you want to create? ";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "Tell me the name: ";
    std::cin >> name;
    std::cout << std::endl;
    Zombie *Nzombie = zombieHorde(n, name);
    for (int i = 0; i < n; i++)
        Nzombie[i].announce();
    delete[] Nzombie;
    return (0);
    
}