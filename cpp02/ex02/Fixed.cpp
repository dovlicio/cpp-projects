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

bool Fixed::operator>(const Fixed &other) const
{
    return _fixedPointValue > other._fixedPointValue; 
}

bool Fixed::operator<(const Fixed &other) const 
{   return _fixedPointValue < other._fixedPointValue;   }

bool Fixed::operator>=(const Fixed &other) const 
{ return _fixedPointValue >= other._fixedPointValue; }

bool Fixed::operator<=(const Fixed &other) const 
{ return _fixedPointValue <= other._fixedPointValue; }

bool Fixed::operator==(const Fixed &other) const 
{ return _fixedPointValue == other._fixedPointValue; }

bool Fixed::operator!=(const Fixed &other) const 
{ return _fixedPointValue != other._fixedPointValue; }

Fixed Fixed::operator+(const Fixed &other) const 
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const 
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const 
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const 
{
    return Fixed(this->toFloat() / other.toFloat());
}


Fixed &Fixed::operator++() 
{
    _fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) 
{
    Fixed temp = *this;
    _fixedPointValue++;
    return temp;
}

Fixed &Fixed::operator--() 
{
    _fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) 
{
    Fixed temp = *this;
    _fixedPointValue--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) 
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) 
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) 
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) 
{
    return (a > b) ? a : b;
}

std::ostream& operator<<( std::ostream& os , const Fixed& fixed )
{
    os << fixed.toFloat();
    return os;
}