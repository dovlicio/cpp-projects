#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed 
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionBits = 8;
    public:
        Fixed() : _fixedPointValue(0)
        {
            std::cout << "Default constructor called" << std::endl;
        }

        Fixed( const Fixed& other) : _fixedPointValue(other._fixedPointValue)
        {
            std::cout << "Copy constructor called" << std::endl;
        }

        Fixed& operator=(const Fixed& other)
        {
            std::cout << "Copy assignment operator called" << std::endl;
            if (this != &other)
                this->_fixedPointValue = other.getRawBits();
            return *this;
        }

        ~Fixed( void )
        {
            std::cout << "Destructor called" << std::endl;
        }

        int     getRawBits(void) const;
        void    setRawBits(int const rawBits);
};

#endif
