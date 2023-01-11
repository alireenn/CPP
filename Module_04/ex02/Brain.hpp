/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:08:27 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 11:19:42 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &rhs);
        Brain& operator=(const Brain &rhs);
        virtual ~Brain();

        std::string *getIdeas();
        void setIdeas(std::string idea);

};

#endif