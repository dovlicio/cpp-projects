#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie* zombie;

    randomChump("Mikiii");
    zombie = newZombie("Djoleeee");
    if (!zombie)
        std::cerr << "Error: Memory Allocation failed" << std::endl;
    delete zombie; 
    return 0;
}