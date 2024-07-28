#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream> 

class Fixed 
{
    private :
    int    a;
    const static int b = 8;

    public :
    Fixed ();
    Fixed(const Fixed &other);
    Fixed &operator = (const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed ();
};


#endif