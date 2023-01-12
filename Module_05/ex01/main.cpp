/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:12:04 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/12 17:11:43 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
    try {
        Bureaucrat bureaucrat("Zero Assoluto",60);
        Form form("Per Dimenticare", 50, 110);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    }
	catch (std::exception &e) 
	{
        std::cout << e.what() << std::endl;
    }
    return 0;
}