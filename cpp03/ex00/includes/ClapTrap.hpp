#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class   ClapTrap
{
    public :
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

    ClapTrap(std::string  name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};


#endif