#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include "../includes/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
    FragTrap(std::string  name);
    void    highFivesGuys();
    void    attack(const std::string& target);
    ~FragTrap();    
} ;

#endif 