#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("")
{
    std::cout << "Animal has been created!" << std::endl;
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "Animal has been copied!" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "Animal has been assigned!" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal has been destroyed!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound..." << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}