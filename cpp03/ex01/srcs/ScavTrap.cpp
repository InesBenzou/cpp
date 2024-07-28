#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

ScavTrap::ScavTrap(std::string  name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->name = name;
    std::cout << "ScavTrap constructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " is dead and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1;
    if (this->energyPoints < 0) this->energyPoints = 0;
}


void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}
