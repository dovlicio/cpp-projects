#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;
    
    public:
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);
        virtual ~ClapTrap(void);
        
        ClapTrap& operator=(const ClapTrap& other);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};  

# endif