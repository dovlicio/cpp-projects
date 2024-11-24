#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}
void    Fixed::setRawBits( int const rawBits )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = rawBits;
}

int Fixed::toInt( void ) const
{
    return _fixedPointValue >> _fractionBits;
}

float   Fixed::toFloat( void ) const
{
    return static_cast<float>( _fixedPointValue ) / ( 1 << _fractionBits );
}

std::ostream& operator<<( std::ostream& os , const Fixed& fixed )
{
    os << fixed.toFloat();
    return os;
}