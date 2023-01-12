/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:02:35 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 16:07:10 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

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

class Bureaucrat;

class Form
{
    private:
        std::string const   _name;
        bool                _signed; // verifica se è stato firmato e alla costruzione non lo è
        int const           _gradeToSign;
        int const           _gradeToExecute;

    public:
        Form();
        Form(std::string name, int const gradeToSign, int const gradeToExecute);
        Form(const Form &rhs);
        virtual ~Form();
        Form &operator=(const Form &rhs);

		std::string			get_name() const;
        int					getGradeExec() const;
        int                 getGradeSign() const;
        void                beSigned(const Bureaucrat& bur);
		bool				isSigned() const;
	 	virtual void        execute(const Bureaucrat& executor) const = 0;

/*
            EXCEPTION vado a sovrascrivere la funzione what quando trovo throw
*/
	class GradeTooHighException: public std::exception { public: virtual const char* what() const throw() { return "Grade Too High"; }};

	class GradeTooLowException: public std::exception { public: virtual const char* what() const throw() { return "Grade Too Low"; }};
};

std::ostream & operator<<(std::ostream &ost, Form const & i);


#endif