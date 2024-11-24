#include "Harl.hpp"

const std::string Harl::levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
const Harl::ComplainFunction Harl::levelFunctions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

Harl::Harl( void )
{
    return ;
}

Harl::~Harl( void )
{
    return ;
}

void    Harl::debug( void )
{
    std::cout << "\033[1;36m";
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
    std::cout << "\033[0m";
}

void    Harl::info( void )
{
    std::cout << "\033[1;32m";
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
    std::cout << "\033[0m";
}

void    Harl::warning( void )
{
    std::cout << "\033[1;33m";
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month.\n" << std::endl;
    std::cout << "\033[0m";
}

void    Harl::error( void )
{
    std::cout << "\033[1;31m";
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
    std::cout << "\033[0m";
}

void    Harl::complain( std::string level )
{
    for (int i = 0; i < 4; ++i)
    {
        if (level == levels[i])
        {
            switch (i)
            {
            case 0:
                (this->*levelFunctions[i])();
                (this->*levelFunctions[i + 1])();
                (this->*levelFunctions[i + 2])();
                (this->*levelFunctions[i + 3])();
                break;
            case 1:
                (this->*levelFunctions[i])();
                (this->*levelFunctions[i + 1])();
                (this->*levelFunctions[i + 2])();
                break;
            case 2:
                (this->*levelFunctions[i])();
                (this->*levelFunctions[i + 1])();
                break;
            case 3:
                (this->*levelFunctions[i])();
                break;
            default:
                break;
            }
            return ;
        }
    }
    std::cout << "\033[1;35m";
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    std::cout << "\033[0m";
}
