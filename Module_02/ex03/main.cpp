/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:52:17 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 19:20:47 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*programma che determina se un dato punto p si trova all'interno 
di un triangolo formato dai punti a, b e c.*/
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
		std::cout << "not inside" << std::endl;
	else
		std::cout << "inside" << std::endl;
	return 0;
}