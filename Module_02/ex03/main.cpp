/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:52:17 by alice             #+#    #+#             */
/*   Updated: 2023/01/09 12:54:26 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*programma che determina se un dato punto p si trova all'interno 
di un triangolo formato dai punti a, b e c.

Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
Output: Inside

Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
Output: Outside*/
int main(void)
{
	float x,y;

	std::cout << "Point A (x y): " << std::flush;
	std::cin >> x >> y;
	Point a (x,y);

	std::cout << "Point B (x y): " << std::flush;
	std::cin >> x >> y;
	Point b (x,y);

	std::cout << "Point C (x y): " << std::flush;
	std::cin >> x >> y;
	Point c (x,y);

	std::cout << "Point P (x y): " << std::flush;
	std::cin >> x >> y;
	Point p (x,y);

	if (!(bsp(a,b,c,p)))
		std::cout << "outside" << std::endl;
	else
		std::cout << "inside" << std::endl;
	return 0;
}