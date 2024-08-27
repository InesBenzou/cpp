#include "../includes/Harl.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Please unter one argument." << std::endl;
        return 0;
    }
    std::string s1;
    s1 = av[1];
    if (s1.empty())
    {
        std::cerr << "Error : Please enter a valid argument" << std::endl;
        return 0;
    }

    Harl harl;
    harl.switchOff(s1);
    return (0);
}