#include "ClapTrap.hpp"

int main(void) 
{
    ClapTrap clap1("Clap1");
    ClapTrap clap2("Clap2");

    clap1.attack("Clap2");
    clap2.takeDamage(5);

    clap2.beRepaired(5);
    clap1.beRepaired(3);

    for (int i = 0; i < 11; ++i) {
        clap1.attack("Clap2");
    }

    clap2.takeDamage(12);
    clap1.beRepaired(5);

    return 0;
}