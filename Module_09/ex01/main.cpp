/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:45:51 by anovelli          #+#    #+#             */
/*   Updated: 2023/04/18 14:59:22 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./ex01 \"expression\"" << std::endl;
        return 1;
    }
    RPN rpn(argv[1]);
    if (!rpn.evaluate())
        return (1);
    return (0);
}