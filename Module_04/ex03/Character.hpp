/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:18:52 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 16:00:24 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *slot[4];
    public:
        Character();
        virtual ~Character();
        Character(const Character &rhs); //costruttore di copie
        Character(std::string const name);
        Character& operator=(const Character &rhs);

        void equip(AMateria* m);
        virtual void unequip(int idx);
        std::string const &getName() const;
        void use(int idx, ICharacter& target);

};