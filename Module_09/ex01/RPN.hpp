/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:06:26 by anovelli          #+#    #+#             */
/*   Updated: 2023/04/18 14:45:09 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
// #include <cctype>

class RPN
{
private:
    std::string _expr;
    std::stack<int> _stack;

public:
    RPN(std::string expr);
    ~RPN(){};

    RPN(const RPN &src);
    RPN &operator=(const RPN &rhs);

    bool evaluate();
};

#endif