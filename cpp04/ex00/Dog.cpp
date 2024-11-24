#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << "Dog has been created!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog has been copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        _type = other._type;
    }
    std::cout << "Dog has been assigned!" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog has been destroyed!" << std::endl;
}

void  Dog::makeSound() const
{
    std::cout << "Av av av.." << std::endl;
}