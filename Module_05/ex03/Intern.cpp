/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:20:12 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 18:37:17 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
	std::cout << "Default costructor for intern called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	if (this != &src)
		*this = src;
	std::cout << "Copy costructor for intern called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Default destructor for intern called" << std::endl;
}

Form *Intern::Shrubbery(std::string FormTarget)
{
	return (new ShrubberyCreationForm(FormTarget));
}

Form *Intern::Robotomy(std::string FormTarget)
{
	return (new RobotomyRequestForm(FormTarget));
}

Form *Intern::Presidential(std::string FormTarget)
{
	return (new PresidentialPardonForm(FormTarget));
}


Form *Intern::makeForm(std::string FormName, std::string FormTarget)
{
	std::string	fStr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(Intern::*FormFunc[3])(std::string) = {&Intern::Shrubbery, &Intern::Robotomy, &Intern::Presidential};
	int i = 0;
	while (i < 3)
    {
        if (FormName == fStr[i])
		{
			std::cout << GREEN "Intern creates " << fStr[i] << RESET << std::endl;
            return (this->*FormFunc[i])(FormTarget);
		}
        i++;
    }
	std::cout << RED "Intern is useless..." << RESET << std::endl;
	return NULL;
}
