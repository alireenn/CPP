/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:07:56 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 17:04:22 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("name"), _signed(0), _gradeToSign(50), _gradeToExecute(50)
{
}

Form::Form(std::string name, int const gradeToSign, int const gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
}

Form::Form(const Form &rhs) : _gradeToSign(rhs._gradeToSign), _gradeToExecute(rhs._gradeToExecute)
{
    std::cout <<  GREEN "Copy costructor for Form called." RESET << std::endl;
    *this = rhs;
}

Form::~Form()
{
    std::cout <<  RED "Destructor for Form " << BOLDRED << this->_name << RED " called." RESET << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	if (this == &rhs )
	    return *this;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::string Form::get_name() const
{
	return std::string(this->_name);
}

int Form::getGradeExec() const
{
    return (this->_gradeToExecute);
}

int Form::getGradeSign() const
{
    return (this->_gradeToSign);
}

bool Form::isSigned() const
{
	return (this->_signed);
}

std::ostream & operator<<(std::ostream &ost, Form const & i)
{
	ost << std::endl;
	ost << "----------------------------------------" << std::endl;
	ost << "Name: " << i.get_name() << std::endl;
	ost << "MinSign: " << i.getGradeSign() << std::endl;
	ost << "MinExec: " << i.getGradeExec() << std::endl;
	ost << "IsSigned: " << i.isSigned()<< std::endl;
	ost << "----------------------------------------" << std::endl;
	return ost;
}


