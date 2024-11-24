#include <iostream>
#include "Zombie.hpp"

void    Zombie::setZombieName( std::string name )
{
    this->_name = name;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void )
{
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << this->_name << " zombi destructed" << std::endl;
    return ;
}
