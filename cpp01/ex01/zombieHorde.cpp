#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie*  zombieHorde = new(std::nothrow) Zombie[N];

    if (!zombieHorde)
        return NULL;
    for (int i = 0; i < N; i++)
        zombieHorde[i].setZombieName(name);
    return zombieHorde;
}