/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:43:19 by alice             #+#    #+#             */
/*   Updated: 2022/12/19 17:50:39 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *rZombie = new Zombie(name);
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
    delete(rZombie);
}