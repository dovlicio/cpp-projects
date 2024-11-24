#include "Weapon.hpp"

void    Weapon::setType( std::string newType )
{
    this->_type = newType;
}

const std::string&  Weapon::getType( void )
{
    const std::string&  typeREF = this->_type;
    return typeREF;
}

Weapon::Weapon( std::string weaponType )
{
    this->_type = weaponType;
    return ;
}

Weapon::~Weapon( void )
{
    return ;
}
