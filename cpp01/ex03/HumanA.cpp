#include "HumanA.hpp"
#include <iostream>


HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA( void )
{
    return ;
}

void    HumanA::attack( void )
{
    if (this->_weapon.getType().size())
        std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    else
        std::cout << this->_name << " does not have a weapon" << std::endl;
}
