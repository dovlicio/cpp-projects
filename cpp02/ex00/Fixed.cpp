#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}
void    Fixed::setRawBits(int const rawBits)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = rawBits;
}
