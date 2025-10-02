#pragma once

#include <iostream>
#include <string.h>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        void harlFilter(std::string level);
};
