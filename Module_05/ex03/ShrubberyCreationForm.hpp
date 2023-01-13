/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:21:53 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 14:31:27 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

/*
Gradi richiesti: sign 145, exec 137
Crea un file <target>_shrubbery nella directory di lavoro e scrive alberi ASCII
dentro.
*/

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string const			_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & rhs);
		~ShrubberyCreationForm();
	
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;

};

#endif
