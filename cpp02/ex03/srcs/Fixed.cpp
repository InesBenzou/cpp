#include "../includes/Fixed.hpp"


//CONSTRUCTEURS 
Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->a = 0;
}

Fixed::Fixed (const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    this->a = value << b;
}

Fixed::Fixed (const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    this->a = roundf(value * (1 << b));
}

Fixed::Fixed(const Fixed& other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;

}

//DESTRUCTEURS
Fixed::~Fixed()
{
    // std::cout << "Destrucutor called" << std::endl;
}



//SURCHARGES
Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->a = other.getRawBits();
    return *this;
}

bool Fixed::operator > (const Fixed &other) const
{
    return (this->a > other.a);
}

bool Fixed::operator < (const Fixed &other) const
{
    return (this->a < other.a);
}

bool  Fixed::operator >= (const Fixed &other) const
{
    return (this->a >= other.a);
}

bool Fixed::operator <= (const Fixed &other) const
{
    return (this->a <= other.a);
}

bool Fixed::operator == (const Fixed &other)
{
    return (this->a == other.a);
}

bool Fixed::operator != (const Fixed &other)
{
    return (this->a != other.a);
}

Fixed Fixed::operator + (const Fixed &other)
{
    Fixed result;
    result.a = this->a + other.a;
    return result;
}

Fixed Fixed::operator - (const Fixed &other)
{
    Fixed result;
    result.a = this->a - other.a;
    return result;
}

Fixed Fixed::operator * (const Fixed &other)
{
    Fixed result;
    long long temp = static_cast<long long>(this->a) * static_cast<long long>(other.a);
    result.a = static_cast<int>(temp >> this->b);
    return result;
}

Fixed Fixed::operator / (const Fixed &other)
{
    Fixed result;
    long long temp = static_cast<long long>(this->a) / static_cast<long long>(other.a);
    result.a = static_cast<int>(temp << this->b);
    return result;
}

Fixed Fixed::operator++ ()
{
    // float res;
    ++this->a;
    // res = this->a << b;
    return *this;
}

Fixed Fixed::operator++ (int)
{
    Fixed temp = *this;
    ++(*this);
    return temp;
}

Fixed Fixed::operator -- ()
{
    --this->a;
    return *this;
}

Fixed Fixed::operator -- (int)
{
    Fixed temp = *this;
    --(*this);
    return temp;
}



//FONCTIONS MEMBRES 
float Fixed::toFloat ( void ) const
{
    return static_cast<float>(this->a) / static_cast<float> (1 << this->b);
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
    // std::cout << "getRawBits member function called" << std::endl;
    return this->a;
}

void Fixed::setRawBits(int const raw)
{
    this->a = raw;
}

Fixed& Fixed::min (Fixed& x, Fixed& y)
{
    return ((x.a < y.a) ? x : y) ;
}

const Fixed& Fixed::min (const Fixed& x, const Fixed& y)
{
     return ((x.a < y.a) ? x : y) ;
}

Fixed& Fixed::max (Fixed& x, Fixed& y)
{
     return ((x.a > y.a) ? x : y) ;
}

const Fixed& Fixed::max (const Fixed& x, const Fixed& y)
{
     return ((x.a > y.a) ? x : y) ;
}

