#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("")
{
    std::cout << "Animal has been created!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    *this = other;
    std::cout << "Animal has been copied!" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "Animal has been assigned!" << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal has been destroyed!" << std::endl;
}

std::string AAnimal::getType() const
{
    return _type;
}