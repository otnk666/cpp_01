#include "harlFilter.hpp"

void Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-"
                "special-ketchup burger. I really do!" << std::endl;
    std::cout << "\n";
}

void Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout <<" cannot believe adding extra bacon costs more money." 
    "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<< std::endl;
    std::cout << "\n";
}

void Harl::warning(void)
{
    std::cout << "[Warning]" << std::endl;
    std::cout <<" think I deserve to have some extra bacon for free." 
    "I've been coming for years, whereas you started working here just last month."<< std::endl;
    std::cout << "\n";
}

void Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout <<"This is unacceptable! I want to speak to the manager now."<< std::endl;
    std::cout << "\n";
}

void Harl::harlFilter(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*func[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    int levelIndex = -1;
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            levelIndex = i;
            break;
        }
    }
    
    switch (levelIndex) 
    {
        case 0:
            (this->*func[0])();
        case 1:
            (this->*func[1])();
        case 2:
            (this->*func[2])();
        case 3:
            (this->*func[3])();
            break;
        default:
            std::cout << "I am not sure how tired I am today..." << std::endl;
            break;
    }
}
