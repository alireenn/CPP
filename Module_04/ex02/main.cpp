/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:11:31 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/10 18:33:46 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
    //const Animal* j = new Dog();
    const Animal* i = new Cat();


    //delete j;//should not create a leak
    delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }
    const Animal* animals[2] = { new Dog(), new Cat() };
    for ( int i = 0; i < 2; i++ ) {
        std::cout << animals[i]->getType()<< i << std::endl;
        delete animals[i];
    }

    return 0;
}