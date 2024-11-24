#include "Harl.hpp"

int main( int argc, char **argv )
{
    Harl    harl;

    if ( argc != 2 )
    {
        std::cout << "\033[1;31m";
        std::cerr << "Error: This program takes one argument" << std::endl;
        std::cout << "\033[0m";
        return 1;
    }
    if (!argv[1][0])
    {
        std::cout << "\033[1;31m";
        std::cerr << "Error: Argument cannot be empty" << std::endl;
        std::cout << "\033[0m";
        return 1;
    }
    harl.complain( argv[1] );
    return 0;
}