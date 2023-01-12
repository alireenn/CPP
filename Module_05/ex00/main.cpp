/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:13:35 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 11:46:16 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
		Bureaucrat bur("syndra", 1);
		std::cout << bur << std::endl;

		bur.incrementGrade();
	}
    catch (Bureaucrat::GradeTooHigh &b)
    {
		std::cout << b.what() << std::endl;
    }

    try
    {
		Bureaucrat bur("Ezreal", 15);
		std::cout << bur << std::endl;

		bur.incrementGrade();
	}
    catch (Bureaucrat::GradeTooHigh &a)
    {
		std::cout << a.what() << std::endl;
    }

    try
    {
        Bureaucrat burry("benceslao", 150);
        std::cout << burry << std::endl;
		burry.decrementGrade();
    }
    catch (Bureaucrat::GradeTooLow &c)
    {
		std::cout << c.what() << std::endl;
    }

	return 0;
}