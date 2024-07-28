#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Ouaf Ouaf!" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou!" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}