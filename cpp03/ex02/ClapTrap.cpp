#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap " << _name << " has been copied!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    std::cout << "ClapTrap " << _name << " has been assigned!" << std::endl;
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if (!_hit_points)
    {
        std::cout << "ClapTrap " << _name << " has no hit points left and cannot attack!" << std::endl;
        return ;
    }
    if (!_energy_points)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (!_hit_points)
    {
        std::cout << "ClapTrap " << _name << " has no hit points left and cannot take more damage!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    _hit_points -= amount;
    if (!_hit_points)
        _hit_points = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!_hit_points)
    {
        std::cout << "ClapTrap " << _name << " has no hit points left and cannot be repaired!" << std::endl;
        return ;
    }
    if (!_energy_points)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left and cannot be repaired!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " gets repaired for " << amount << " points of damage!" << std::endl;
    _hit_points += amount;
    if (_hit_points > 10)
        _hit_points = 10;
    _energy_points--;
}
