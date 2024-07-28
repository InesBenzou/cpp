#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->name = name;
    std::cout << "ClapTrap constructor called" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1;
    if (this->energyPoints < 0) this->energyPoints = 0;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead and cannot take damage!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    this->energyPoints -= 1;
    this->attackDamage = amount;
    this->hitPoints -= amount;
    if (this->hitPoints < 0) this->hitPoints = 0;
    if (this->energyPoints < 0) this->energyPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead and cannot be repaired!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints -= 1;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}