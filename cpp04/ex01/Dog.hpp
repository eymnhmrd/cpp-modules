#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private: 
        Brain   *b;
    public:
        Dog();
        Dog(const Dog& obj);
        ~Dog();
        Dog& operator=(const Dog& obj);
        void    makeSound() const;
};

#endif