#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : Default Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "default";
}

Brain::~Brain()
{
    std::cout << "Brain : Destructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain : Copy Constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
}

Brain& Brain::operator=(const Brain& obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}