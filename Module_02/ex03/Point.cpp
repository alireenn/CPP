/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:08:50 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 19:17:57 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*Come scritto nell'hpp abbiamo il costruttore predefinito che inizialilizza il punto 
sull origine.
Il secondo accetta due argomenti che rappresentano le coordinate e inizializzza il punto su queste.
Il costruttore di copie prende un riferimento ad un altro oggetto e crea un nuovo oggetto point
con le stesse coorfinate dell'originale*/
Point::Point(): _x(0), _y(0){}

Point::Point(const float x, const float y): _x(x), _y(y){}

Point::Point(const Point &src): _x(src._x), _y(src._y){}

Point::~Point(){}
/*L'operatore di assegnazione in overload, Point::operator=(const Point &rhs),
prende un riferimento a un altro oggetto Point e assegna le coordinate dell'originale
all'oggetto su cui viene chiamato l'operatore.*/
Point &Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return *this;
}
//getters
Fixed Point::getX(void) const {
	return this->_x;
}

Fixed Point::getY(void) const {
	return this->_y;
}