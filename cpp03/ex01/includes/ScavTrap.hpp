#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include "../includes/ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public :
    ScavTrap(std::string  name);
    void    guardGate();
    void    attack(const std::string& target);
    ~ScavTrap();
} ;


#endif