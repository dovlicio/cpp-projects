#include <iostream>
#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( std::string name )
{
    this->_name = name;
    std::cout << this->_name << " zombi constructed" << std::endl;
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << this->_name << " zombi destructed" << std::endl;
    return ;
}
