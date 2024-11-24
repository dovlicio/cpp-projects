#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat has been created!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    _brain = new Brain(*other._brain);
    std::cout << "Cat has been copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        _type = other._type;

        delete _brain;

        _brain = new Brain(*other._brain);
    }
    std::cout << "Cat has been assigned!" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat has been destroyed!" << std::endl;
}

void  Cat::makeSound() const
{
    std::cout << "Maawwwuu Maawwuu.." << std::endl;
}