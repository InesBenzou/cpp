#include "../includes/Harl.hpp"

Harl::Harl()
{}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." <<std::endl;
}


void Harl::switchOff(std::string levelMax)
{
    void (Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levelsMax[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levelsMax[i] == levelMax)
        {
            while (i < 4)
            {
            (this->*f[i])();
            std::cout << std::endl;
            i++;
            }
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}


Harl::~Harl()
{}
