#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>
#include <string>

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

    //SURCHAGE DES OPERATEURS 
    //AFFECTATION
    Fixed &operator = (const Fixed &other);

    //COMPARAISON
    bool operator > (const Fixed &other) const;
    bool operator < (const Fixed &other) const;
    bool operator >= (const Fixed &other) const;
    bool operator <= (const Fixed &other) const;
    bool operator == (const Fixed &other);
    bool operator != (const Fixed &other);

    //ARITHMETIQUE
    Fixed operator + (const Fixed &other);
    Fixed operator - (const Fixed &other);
    Fixed operator * (const Fixed &other);
    Fixed operator / (const Fixed &other);

    //INCREMENTATION
    Fixed operator ++ ();
    Fixed operator ++ (int);
    Fixed operator -- ();
    Fixed operator -- (int);

    
    //FONCTIONS MEMBRES SURCHARGEES
    static Fixed& min (Fixed& x, Fixed& y);
    static const Fixed& min (const Fixed& x, const Fixed& y);
    static Fixed& max (Fixed& x, Fixed& y);
    static const Fixed& max (const Fixed& x, const Fixed& y);


    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat ( void ) const;
    int toInt( void ) const;
    ~Fixed ();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif 