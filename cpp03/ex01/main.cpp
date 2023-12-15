#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Ziad");
    

    a.attack("TARGET 2");

    a.beRepaired(50);
    a.takeDamage(20);

    a.guardGate();

    return 0;
}
