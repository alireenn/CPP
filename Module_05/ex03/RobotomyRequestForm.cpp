/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:42:53 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 16:32:40 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45)
{
	std::cout << "Default costructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "Name costructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs)
{
	std::cout <<  GREEN "Copy costructor for RobotomyRequestForm called." RESET << std::endl;
    *this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this == &rhs )
	    return *this;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default destructor for RobotomyRequestForm called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return std::string(this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	//int randy;

	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << BOLDBLUE "bzzbbbbzzbzb" RESET << std::endl;
	//randy = rand() % 2;
	if ((rand() % 2 ) == 0)
		std::cout << GREEN "Success! " << this->_target << " has been robotomized!" RESET << std::endl;
	else
		std::cout << RED "Failure... " << this->_target << " robotomy failed ;-;" RESET << std::endl;
}
