
#include "harlFilter.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return (1);
    }

    Harl harl;
    std::string level = argv[1];
    harl.harlFilter(level);
    return (0);
}