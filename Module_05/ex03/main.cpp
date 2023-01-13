/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:12:04 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 18:32:47 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	john("John", 1);
	Intern		intern;
	Form		*form;

	form = intern.makeForm("shrubbery creation", "cozy");

	john.SignForm(*form);
	john.executeForm(*form);
	delete form;

	form = intern.makeForm("robotomy request", "Bender");

	john.SignForm(*form);
	john.executeForm(*form);
	delete form;

	form = intern.makeForm("presidential pardon", "Jerry Smith");

	john.SignForm(*form);
	john.executeForm(*form);
	delete form;

	form = intern.makeForm("nothing", "Jerry Smith");
	delete form;

	// john.SignForm(*form);
	// john.executeForm(*form);

	return (0);
}