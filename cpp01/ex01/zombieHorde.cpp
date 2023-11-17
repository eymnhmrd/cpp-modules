#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zz = new (std::nothrow) Zombie[N];

    if (!zz)
    {
        std::cout << "Allocation failed";
        return (NULL);
    }
    for (int i = 0; i < N; i++)
        zz[i].setName(name);
    return (zz);
}