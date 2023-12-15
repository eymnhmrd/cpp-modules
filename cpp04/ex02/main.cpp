#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
    Animal *p[] =   
    {
        new Dog(),
        new Dog(), 
        new Dog(), 
        new Cat(),
        new Cat(), 
        new Cat()
    };

    for (int i = 0; i < 6; i++)
        p[i]->makeSound();

    for (int i = 0; i < 6; i++)
        delete p[i];

    return (0);
}
