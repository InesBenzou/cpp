#include "../includes/ClapTrap.hpp"

int main (void)
{
    ClapTrap    trap("Eugene");
    ClapTrap    trap2("Porter");

    trap.attackDamage = 10;
    trap2.attackDamage = 6;
    trap.attack("Porter");
    trap2.takeDamage(trap.attackDamage);
    trap2.beRepaired(5);
    trap2.attack("Eugene");
    trap.takeDamage(trap2.attackDamage);
    trap2.beRepaired(5);
    return (0);
}