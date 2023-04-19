/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:33:31 by anovelli          #+#    #+#             */
/*   Updated: 2023/04/19 15:58:11 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static std::string check_digits(const std::string& s) 
{
    for (std::string::const_iterator it = s.begin(); it != s.end(); ++it) {
        if (!isdigit(*it) && *it != '-')
		{
            throw std::invalid_argument("Error: The string contains a non-numeric character.");
        }
    }
    return s;
}

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Usage: " << argv[0] << " sequence of positive integers" << std::endl;
		return 1;
	}

	std::vector<int> vec;
	std::list<int> lst;

	for (int i = 1; i < argc; i++)
	{
		try
		{
			check_digits(argv[i]);
			int val = std::atoi(argv[i]);
			if (val <= 0)
			{
				std::cerr << "Error: argument " << argv[i] << " is not a positive integer" << std::endl;
				return 1;
			}
			vec.push_back(val);//aggiunge in coda nel container
			lst.push_back(val);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			exit(1);
		}
	}	

	std::cout << "Unsorted sequence:";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;

	std::clock_t start = std::clock();
	mergeSort(vec.begin(), vec.end());
	std::clock_t end = std::clock();
	double seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout << "Sorted sequence (using vector):";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
	std::cout << "Time used (using vector): " << seconds << " seconds" << std::endl;

	start = std::clock();
	mergeSort(lst.begin(), lst.end());
	end = std::clock();
	seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout << "Sorted sequence (using list):";
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
	std::cout << "Time used (using list): " << seconds << " seconds" << std::endl;

	return 0;
}
