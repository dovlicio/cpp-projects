#include "Zombie.hpp"

int main(void)
{
    Zombie* zombies;

    zombies = zombieHorde(10, "Mikiiii");
    if (!zombies)
        return 1;
    for (int i = 0; i < 10; i++)
        zombies[i].announce();
    delete[] zombies;
    return 0;
}
