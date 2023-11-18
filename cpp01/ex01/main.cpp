#include "Zombie.hpp"

#define MAX_ZOMBIES 500000

std::string getName(std::string str)
{
    std::string data;
    bool        valid = false;

    std::cout << str ;
    while (!valid)
    {
        std::getline(std::cin, data);
        if (!data.empty())
            valid = true;
        else if (std::cin.eof())
        {
            std::cout << "EOF reached" << std::endl;
            std::exit(EXIT_FAILURE);
        }
        else
        {
            std::cout << "Please enter valid name !!" << std::endl;
            std::cout << str;
        }
    }
    return (data);
}

bool    checkNumber(std::string num)
{
    for (size_t i = 0; i < num.length();i++)
    {
        if (!std::isdigit(num[i]))
            return (false);
    }
    return (true);
}

int    getNumber(std::string str)
{
    std::string num;
    bool        valid = false;

    std::cout << str;
    while (!valid)
    {
        std::getline(std::cin, num);
        if (!num.empty() && checkNumber(num) && std::atoi(num.c_str()) < MAX_ZOMBIES)
            valid = true;
        if (std::cin.eof())
        {
            std::cout << "EOF reached" << std::endl;
            std::exit(EXIT_FAILURE);
        }
        else 
        {
            std::cout << "Enter a valid number !!" << std::endl;
            std::cout << str;
        }
    }
    return (std::atoi(num.c_str()));
}

int main()
{
    std::string name = getName("Enter Horde name :");
    int N = getNumber("Enter N :");

    Zombie *z = zombieHorde(N, name);

    if (z)
    {
        for (int i = 0; i < N; i++)
            z[i].announce();
        delete[] z;
    }
    return (0);
}
