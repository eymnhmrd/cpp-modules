#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Ziad");

    a.attack("TARGET");

    a.takeDamage(9);
    a.beRepaired(120);
    a.takeDamage(150);
    a.takeDamage(1);

    return 0;
}
