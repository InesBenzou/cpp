#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed 
{
    private :
    int    a;
    const static int b = 8;

    public :
    Fixed ();
    Fixed (const int);
    Fixed (const float);
    Fixed (const Fixed &other);

    Fixed &operator = (const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat ( void ) const;
    int toInt( void ) const;
    ~Fixed ();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif 