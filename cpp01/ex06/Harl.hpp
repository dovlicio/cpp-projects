#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    public:
        Harl( void );
        ~Harl( void );
        void    complain( std::string level );
        typedef void (Harl::*ComplainFunction)( void );
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        static const std::string        levels[4];
        static const ComplainFunction   levelFunctions[4];
};

#endif
