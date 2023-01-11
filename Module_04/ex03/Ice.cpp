#include "Ice.hpp"

Ice::Ice()
{
	std::cout <<  GREEN "Costructor for " RESET << BOLDGREEN "Ice" RESET << " called." RESET << std::endl;
}

Ice::Ice(std::string const &type)
{
	this->type = type;
	std::cout << GREEN "A new materia has been created!" RESET << std::endl;
}

Ice::Ice(const Ice &rhs)
{
	std::cout <<  GREEN "Copy costructor for Ice called!" RESET << std::endl;
	*this = rhs;
}

Ice::~Ice()
{
	std::cout << GREEN
}