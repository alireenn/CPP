/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:48:59 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 16:39:30 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(std::string name);
        Dog(const Dog &rhs);
        ~Dog();
        void makeSound() const;
};
