#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{  
    std::cout <<  GREEN "Costructor for " RESET << BOLDGREEN "Cure" RESET << " called." RESET << std::endl;
}

Cure::~Cure()
{
    std::cout << BOLDRED "Cure" RESET << RED " has been destroyed" RESET << std::endl; 
}

Cure::Cure(std::string const &type)
{
    this->type = type;
    std::cout << GREEN "Cure has been created!" RESET << std::endl;
}

Cure::Cure(const Cure &rhs)
{
    std::cout <<  GREEN "Copy Costructor for " RESET << BOLDGREEN "Cure" RESET << GREEN " called." RESET << std::endl;
    *this = rhs;
}

Cure &Cure::operator=(const Cure &rhs)
{
    if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

