/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:07:56 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 11:46:01 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(std::string name);
        Cat(const Cat &rhs);
        Cat& operator=(const Cat &rhs);
        ~Cat();
        void makeSound() const;
        Brain *getBrain() const;
};

#endif