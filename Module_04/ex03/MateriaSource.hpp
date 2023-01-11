/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:19:46 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 16:44:05 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inventory[4]; 
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource &rhs); //costruttore di copie
        MateriaSource& operator=(const MateriaSource &rhs);
    
        void learnMateria(AMateria *);
        AMateria* createMateria(std::string const & type);
};

#endif