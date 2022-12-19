/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:10:02 by alice             #+#    #+#             */
/*   Updated: 2022/12/19 18:35:57 by alice            ###   ########.fr       */
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
    zombieHorde(n, name);
    
}