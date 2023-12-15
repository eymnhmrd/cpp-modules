#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("Ziad");
    

    a.attack("TARGET 2");

    a.beRepaired(50);
    a.takeDamage(20);

    a.highFivesGuys();

    return 0;
}
