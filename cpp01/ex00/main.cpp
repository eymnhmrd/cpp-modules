#include "Zombie.hpp"

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
            std::cout << "Please enter valid data !!" << std::endl;
            std::cout << str;
        }
    }
    return (data);
}

int main()
{
    std::string name1 = getName("Enter first name : ");
    std::string name2 = getName("Enter second name : ");
    
    Zombie *z = newZombie(name1);

    randomChump(name2);
    delete z;

    return (0);
}
