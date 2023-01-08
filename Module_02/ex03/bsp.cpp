/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:02:31 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 19:07:10 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*Questa funzione viene utilizzata per vedere se le aree dei triangoli sono positive,
indipendentemente dall'ordine in cui sono assegnati i punti.*/
static Fixed   abs_value(Fixed x)
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed    area(Point const a, Point const b, Point const c) {
	return (((a.getX() * ( b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * ( a.getY() - b.getY()))) / 2);
}
/* La funzione è progettata per determinare se un dato punto p si trova all'interno del triangolo formato dai punti a, b e c.

Per farlo la funzione calcola l'area del triangolo usando la funzione area sopra,
che prende come argomenti tre oggetti Punto e restituisce l'area del triangolo formato
da quei punti. La funzione area utilizza le coordinate dei punti per calcolare l'area 
*/
bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	abcArea = abs_value(area(a,b,c));
	Fixed	abpArea = abs_value(area(a,b,p));
	Fixed	acpArea = abs_value(area(a,c,p));
	Fixed	bcpArea = abs_value(area(b,c,p));

	return(abcArea == abpArea + acpArea + bcpArea);
}