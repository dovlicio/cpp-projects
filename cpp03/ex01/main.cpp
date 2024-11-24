#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) 
{
    ClapTrap clap1("Clap1");
    ClapTrap clap2("Clap2");

    clap1.attack("Clap2");
    clap2.takeDamage(0);
    clap1.beRepaired(3);

    ScavTrap scav1("Scav1");

    scav1.attack("Clap1");
    clap1.takeDamage(20);
    scav1.guardGate();

    for (int i = 0; i < 51; ++i) {
        scav1.attack("Clap1");
    }

    return 0;
}