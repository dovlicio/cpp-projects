#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "WrongCat has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat has been copied!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        _type = other._type;
    }
    std::cout << "WrongCat has been assigned!" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat has been destroyed!" << std::endl;
}