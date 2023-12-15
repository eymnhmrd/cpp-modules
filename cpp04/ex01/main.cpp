#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << "---------------------" << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "---------------------" << std::endl;


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
