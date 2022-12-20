/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:10:02 by alice             #+#    #+#             */
/*   Updated: 2022/12/20 12:51:07 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n;
    int i = 0;
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