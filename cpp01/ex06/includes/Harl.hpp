#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

class Harl
{
    private : 
    void debug (void);
    void info (void);
    void warning (void);
    void error (void);

    public :
    Harl();
    void (Harl::*f[4])();
    void switchOff(std::string levelMax);
    ~Harl();
}
;
#endif
