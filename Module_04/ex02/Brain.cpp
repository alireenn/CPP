/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:24:43 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 11:19:33 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << GREEN "Default Brain constructor called" RESET<< std::endl;
}

Brain::Brain(const Brain &rhs)
{
    std::cout <<  GREEN "Copy costructor for Brain called." RESET << std::endl;
    *this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
    if(this != &rhs)
        for(int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout <<  RED "Destructor for Brain called." RESET << std::endl;
}

std::string *Brain::getIdeas()
{
    int i = 0;
    while (this->ideas[i] != "")
    {
        std::cout << BOLDYELLOW << this->ideas[i] << RESET << std::endl;
        i++;
    }
    return this->ideas;
}

void Brain::setIdeas(std::string idea)
{
    int i = 0;
    while (this->ideas[i] != "")
        i++;
    this->ideas[i] = idea;
}