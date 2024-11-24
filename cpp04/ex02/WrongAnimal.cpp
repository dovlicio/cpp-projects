#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("")
{
    std::cout << "WrongAnimal has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "WrongAnimal has been copied!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        _type = other._type;
    std::cout << "WrongAnimal has been assigned!" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal has been destroyed!" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound.." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}