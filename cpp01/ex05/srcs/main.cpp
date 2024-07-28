#include "../includes/Harl.hpp"

int main (void)
{
    Harl harl;
    std::cout << "DEBUG level:" << std::endl;
    harl.complain("DEBUG");
    std::cout << "INFO level:" << std::endl;
    harl.complain("INFO");
    std::cout << "WARNING level:" << std::endl;
    harl.complain("WARNING");
    std::cout << "ERROR level:" << std::endl;
    harl.complain("ERROR");
    std::cout << "UNKNOWM level:" << std::endl;
    harl.complain("UNKNOWN");
    return (0);
}