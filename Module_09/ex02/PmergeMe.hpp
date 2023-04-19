/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:30:42 by anovelli          #+#    #+#             */
/*   Updated: 2023/04/19 15:57:51 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <iterator>
#include <set>


/*  1 - Se la sequenza da ordinare ha lunghezza 0 oppure 1, è già ordinata. Altrimenti:
    2 - La sequenza viene divisa (divide) in due metà 
        (se la sequenza contiene un numero dispari di elementi, viene divisa in due sottosequenze di cui la prima ha un elemento in più della seconda)
    3 - Ognuna di queste sottosequenze viene ordinata, applicando ricorsivamente l'algoritmo (impera)
    4 - Le due sottosequenze ordinate vengono fuse (combina). 
        Per fare questo, si estrae ripetutamente il minimo delle due sottosequenze e lo si pone nella sequenza in uscita, che risulterà ordinata*/

template<typename Iterator>
Iterator my_prev(Iterator it, typename std::iterator_traits<Iterator>::difference_type n = 1) {
    std::advance(it, -n);
    return it;
}


template<typename Iterator>
void merge(Iterator begin, Iterator middle, Iterator end)
{
	std::inplace_merge(begin, middle, end);
}

template<typename Iterator>
void insertSort(Iterator begin, Iterator end)
{
	for (Iterator i = begin; i != end; ++i)
	{
		Iterator j = i;
		while (j != begin && *j < *(my_prev(j)))
		{
			std::iter_swap(j, my_prev(j));
			--j;
		}
	}
}

template<typename Iterator>
void mergeSort(Iterator begin, Iterator end, int cut = 10)
{
	if (std::distance(begin, end) <= cut)
		insertSort(begin, end);
	else
	{
		Iterator middle = begin;
		std::advance(middle, std::distance(begin, end) / 2);
		mergeSort(begin, middle, cut);
		mergeSort(middle, end, cut);
		merge(begin, middle, end);
	}
}



#endif