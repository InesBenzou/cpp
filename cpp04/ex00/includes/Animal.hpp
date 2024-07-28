#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal 
{
    protected :
        std::string type;
    public :
        Animal();
        virtual std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();
};

class Dog : public Animal
{
    public :
        Dog();
        void makeSound() const;
        std::string getType() const;
        virtual ~Dog();
};

class Cat : public Animal 
{
    public :
        Cat ();
        std::string getType() const;
        void makeSound() const;
        virtual ~Cat();
};

#endif