#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    
    std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << _name << " has been copied!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    std::cout << "ScavTrap " << _name << " has been assigned!" << std::endl;
    return *this;
}

void    ScavTrap::attack(const std::string& target)
{
    if (!_hit_points)
    {
        std::cout << "ScavTrap " << _name << " has no hit points left and cannot attack!" << std::endl;
        return;
    }
    if (!_energy_points)
    {
        std::cout << "ScavTrap " << _name << " has no energy points left and cannot attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points--;
}

void   ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}