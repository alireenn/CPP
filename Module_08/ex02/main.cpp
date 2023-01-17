/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:21:17 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/17 14:23:41 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	MutantStack<int> mstack;
	std::list<int> l;


	mstack.push(5);
	mstack.push(17);
	std::cout <<  "Printing last inserted STACK values:\n";
	std::cout << "["  << mstack.top() <<  "]" << std::endl;

	l.push_back(5);
	l.push_back(17);
	std::cout <<  "Printing first inserted LIST values:\n";
	std::cout << "["  << l.back() <<  "]" << std::endl << std::endl;

	std::cout <<  "Popping first STACK values:\n";
	mstack.pop();

	std::cout <<  "Popping last LIST values:\n\n";
	l.pop_back();

	std::cout <<  "Printing STACK size:\n";
	std::cout << "["  << mstack.size() <<  "]" << std::endl;
	std::cout <<  "Printing LIST size:\n";
	std::cout << "["  << l.size() <<  "]" << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);

	MutantStack<int>::it it = mstack.begin();
	MutantStack<int>::it ite = mstack.end();

	++it;
	--it;
	std::cout <<  "Using iterators to print STACK values:\n";
	while (it != ite)
	{
		std::cout << "["  << *it <<  "] " ;
		++it;
	}

	std::list<int>::iterator itl = l.begin();
	std::list<int>::iterator itel = l.end();

	++itl;
	--itl;
	std::cout <<  "\nUsing iterators to print LIST values:\n";
	while (itl != itel)
	{
		std::cout << "["  << *itl <<  "] " ;
		++itl;
	}

	return 0;
}