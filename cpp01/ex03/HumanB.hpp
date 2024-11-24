#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB( std::string name );
        ~HumanB( void );
        void    attack( void );
        void    setWeapon( Weapon& newWeapon);
    private:
        std::string _name;
        Weapon*      _weapon;
};

#endif
