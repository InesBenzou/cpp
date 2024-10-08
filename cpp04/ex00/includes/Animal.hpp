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