/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alice <alice@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:54:36 by alice             #+#    #+#             */
/*   Updated: 2023/01/08 19:01:52 by alice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed _x;
        Fixed _y;

/*Costruttore predefinito: un costruttore che inizializza il punto sull'origine (0, 0).
Costruttore con argomenti: un costruttore che accetta due argomenti float che rappresentano le coordinate x e y del punto e inizializza il punto su tali coordinate.
Costruttore di copia: un costruttore che prende un riferimento a un altro oggetto Point e crea un nuovo oggetto Point con le stesse coordinate dell'originale.
Distruttore: un distruttore che viene chiamato quando un oggetto Point esce dall'ambito o viene eliminato.*/
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &src);
        ~Point();
/*prende un riferimento a un altro oggetto Point e assegna le coordinate dell'originale
all'oggetto su cui viene chiamato l'operatore.*/
        Point&  operator=(const Point &rhs);
/*getter di x e y, restutuiscono le coordinate del putno*/
        Fixed getX(void) const;
        Fixed getY(void) const;

};
/*La classe Point ha anche una funzione non membro*/
bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif