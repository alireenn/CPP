/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:47:14 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 18:26:21 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>
#include <string>

class Intern
{
	private:
		Form *Shrubbery( std::string FormTarget);
		Form *Robotomy( std::string FormTarget);
		Form *Presidential( std::string FormTarget);
	public:
	    Intern();
   		Intern( const Intern& src );
    	~Intern();
	
		Form *makeForm(std::string FormName, std::string FormTarget); // It return a pointer to a Form object (whose name is the one passed as parameter)
															    //whose target will be initialized to the second parameter.
};

#endif
