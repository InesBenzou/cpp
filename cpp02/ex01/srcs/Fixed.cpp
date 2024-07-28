#include "../includes/Fixed.hpp"

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->a = 0;
}

Fixed::Fixed (const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->a = value << b;
}

Fixed::Fixed (const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->a = roundf(value * (1 << b));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;

}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->a = other.getRawBits();
    return *this;
}

float Fixed::toFloat ( void ) const
{
    return static_cast<float>(this->a / (1 << b));
}

int Fixed::toInt( void ) const
{
    return this->a >> b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->a;
}

void Fixed::setRawBits(int const raw)
{
    this->a = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destrucutor called" << std::endl;
}