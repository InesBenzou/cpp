#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
#include "../includes/Brain.hpp"

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
    private :
        Brain* brain;
    public :
        Dog();
        void makeSound() const;
        std::string getType() const;
        virtual ~Dog();
};

class Cat : public Animal 
{
    private :
        Brain* brain;
    public :
        Cat ();
        std::string getType() const;
        void makeSound() const;
        virtual ~Cat();
};

class   WrongAnimal
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        std::string getType() const;
        void makeSound() const;
        virtual ~WrongAnimal();
};

class  WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        std::string getType() const;
        void makeSound() const;
        virtual ~WrongCat();
};

#endif