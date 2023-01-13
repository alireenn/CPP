/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:25:03 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 14:35:35 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

/*
Gradi richiesti: sign 72, exec 45
Fa dei rumori di perforazione. Quindi, informa che <target> è stato robotizzato
con successo il 50% delle volte. Altrimenti, informa che la robotomia è fallita.
*/

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const			_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm&	operator=(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm();
	
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;

};

#endif