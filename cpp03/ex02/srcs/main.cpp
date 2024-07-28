#include "../includes/FragTrap.hpp"
#include "../includes/ClapTrap.hpp"

int main()
{
    ClapTrap trap1("Clap1");
    FragTrap trap2("Scav1");

    trap1.attack("Scav1");
    trap2.takeDamage(trap1.attackDamage);
    trap2.beRepaired(20);
    trap2.highFivesGuys();
    trap2.attack("Clap1");
    trap1.takeDamage(trap2.attackDamage);

    return 0;
}