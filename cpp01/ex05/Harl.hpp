#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
private:
    /* data */
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    Harl(/* args */);
    ~Harl();

    void    complain(std::string level);
};



#endif