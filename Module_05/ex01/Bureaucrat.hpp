/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:30:29 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 16:50:35 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>
#include "Form.hpp"

#define RESET       "\033[0m"
#define BLACK       "\033[30m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"

class Form;

class Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &rhs);
        virtual ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat &rhs);

    std::string const   getName() const;
    int                 getGrade() const;
    void                incrementGrade();
    void                decrementGrade();
	void 				signForm(Form &form);
 /*
            EXCEPTION
 */
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw() //vado a sovrascrivere la funzione what quando trovo throw
			{ 
				return "Grade Too High";
			}
	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw() 
			{ 
				return "Grade Too Low";
			}
	};
};

std::ostream & operator<<(std::ostream &ost, Bureaucrat const & i);

#endif