#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal*   meta = new Animal();
    const Animal*   j = new Dog();
    const Animal*   i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    const WrongAnimal*  e = new WrongCat();
    std::cout << e->getType() << " " << std::endl;
    e->makeSound();


    delete meta;
    delete j;
    delete i;
    delete e;

    return 0;
}