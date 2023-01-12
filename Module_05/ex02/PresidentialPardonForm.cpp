/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:42:48 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 15:56:08 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5), _target(target)
{
	std::cout << "Default costructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : _target(target), Form("Presidential Pardon Form", 25, 5), _target(target)
{
	this->_target = target;
	std::cout << "Name costructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	std::cout <<  GREEN "Copy costructor for PresidentialPardonForm called." RESET << std::endl;
    *this = rhs;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this == &rhs )
	    return *this;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default destructor for PresidentialPardonForm called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return std::string(this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << this->_target << " has been pardoned by" << BOLDRED "Zaphod Beeblebrox." RESET << std::cout;
}
