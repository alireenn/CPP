/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:25:46 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/13 15:10:59 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int randy = rand() % 3;
	switch (randy)
	{
	case 0:
		std::cout << "generate A class" << std::endl;
		return (new A);
	case 1:
		std::cout << "generate B class" << std::endl;
		return (new B);
	case 2:
		std::cout << "generate C class" << std::endl;
		return (new C);
	default:
		std::cout << "Can't create class..." << std::endl;
		return NULL;
	}
}

/*dynamic_cast è usato per eseguire il controllo del tipo in runtime. 
Viene usato per convertire un puntatore o un riferimento di un tipo di classe base in un puntatore o riferimento di un tipo di classe derivata.*/

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Class A identified!" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Class B identified!" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Class C identified!" << std::endl;
	else
		std::cout << "Can't identify the class..." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Class A identified!" << std::endl;
	}
	catch(const std::exception& e){}
	
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Class B identified!" << std::endl;
	}
	catch(const std::exception& e){}
	
	try
	{
		C& f = dynamic_cast<C&>(p);
		(void)f;
		std::cout << "Class C identified!" << std::endl;
	}
	catch(const std::exception& e){}
	return ;
}

int     main( void )
{
	srand(time(NULL)); //genera il seed inizializzando il generatore di numeri casuali
    Base*   a = generate();
    Base*   b = generate();
    Base*   c = generate();
    Base*   d = generate();

    std::cout << "/* **************************************** */" << std::endl;

    std::cout << "a* = "; identify( a );
    std::cout << "a& = "; identify( *a ); std::cout << std::endl;

    std::cout << "b* = "; identify( b );
    std::cout << "b& = "; identify( *b ); std::cout << std::endl;

    std::cout << "c* = "; identify( c );
    std::cout << "c& = "; identify( *c ); std::cout << std::endl;

    std::cout << "d* = "; identify( d );
    std::cout << "d& = "; identify( *d ); std::cout << std::endl;

    std::cout << "/* ***************************************** */" << std::endl;


    delete a;
    delete b;
    delete c;
    delete d;

    return (0);
}