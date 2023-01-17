/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:07:39 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/17 13:39:23 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

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

class Span
{
	private:
	std::list<int> _list;
		unsigned int _N;

	public:
		Span();
        Span(unsigned int N);
        virtual ~Span();
        Span& operator=(const Span &rhs);
	/*add a single number
	to the Span. It will be used in order to fill it. Any attempt to add a new element if there
	are already N elements stored should throw an exception*/
		void						addNumber(int n);
		void						addIter(const std::list<int>::iterator &start, const std::list<int>::iterator &end);
		int							shortestSpan();
		int 						longestSpan();
		const std::list< int >*		getList( void ) const;

};
std::ostream& operator<<( std::ostream&, const Span& );

#endif