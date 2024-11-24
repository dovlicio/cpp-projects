#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;

    std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << _name << " has been copied!" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hit_points = other._hit_points;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    std::cout << "FragTrap " << _name << " has been assigned!" << std::endl;
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}