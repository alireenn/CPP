/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:23:00 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/11 11:16:14 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();
    const Cat cat;
    const Dog doggy;

    const Animal X;
    const Animal Y(X);


    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << w->getType() << " " << std::endl;

    j->makeSound();
    i->makeSound(); //will output the cat sound!
    w->makeSound();
    meta->makeSound();
    cat.getBrain()->setIdeas("gato");
    cat.getBrain()->getIdeas();
    doggy.getBrain()->setIdeas("dogo");
    doggy.getBrain()->setIdeas("dogo1");
    doggy.getBrain()->setIdeas("dogo2");
    doggy.getBrain()->setIdeas("dogo3");
    doggy.getBrain()->getIdeas();

    delete meta;
    delete j;
    delete i;
    delete w;

    return 0;
}