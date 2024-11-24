#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name)
{
    this->_weapon = NULL;
    return ;
}

HumanB::~HumanB( void )
{
    return ;
}

void    HumanB::attack( void )
{
    if (this->_weapon != NULL && this->_weapon->getType().size())
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " does not have a weapon" << std::endl;
}

void HumanB::setWeapon( Weapon& newWeapon)
{
    this->_weapon = &newWeapon;
}