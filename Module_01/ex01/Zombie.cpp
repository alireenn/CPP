#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name)
{
}

Zombie::~Zombie( void )
{
    std::cout << "Zombie " << this->_name << " died." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}