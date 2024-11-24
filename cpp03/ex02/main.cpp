#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "=== Creating ClapTrap Object ===" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << std::endl;

    std::cout << "=== Creating ScavTrap Object ===" << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("target");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    std::cout << std::endl;

    std::cout << "=== Creating FragTrap Object ===" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("villain");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys();
    std::cout << std::endl;

    std::cout << "=== Destructing Objects ===" << std::endl;

    return 0;
}
