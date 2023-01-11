/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:48:59 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 11:14:59 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &rhs);
        Dog(std::string name);
        Dog& operator=(const Dog &rhs);
        ~Dog();
        void makeSound() const;
        Brain *getBrain() const;
};
