#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal*    j2 = new Dog();
    const Animal*    i2 = new Cat();

    delete j2;
    delete i2;

    Animal* animals[10];

    for (int x = 0; x < 5; x++) {
        animals[x] = new Dog();
    }
    for (int x = 5; x < 10; x++) {
        animals[x] = new Cat();
    }

    for (int x = 0; x < 10; x++) {
        animals[x]->makeSound();
    }

    for (int x = 0; x < 10; x++) {
        delete animals[x];
    }

    return 0;
}