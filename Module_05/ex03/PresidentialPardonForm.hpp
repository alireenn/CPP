/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:25:01 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 15:56:09 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPRESIDENTIALPARDONFORM_HPP
# define SPRESIDENTIALPARDONFORM_HPP

/*
Gradi richiesti: sign 25, exec 5
Informa che <target> è stato graziato da Zaphod Beeblebrox
*/

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const			_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm&	operator=(PresidentialPardonForm const & rhs);
		~PresidentialPardonForm();
	
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;

};

#endif