#include <iostream>
#include "add.hpp"

int main(int argc, char * argw[])
{
    if (argc != 3)
    {
        std::cerr << "Exactly 3 arguments requares";
        return 1;
    }
    int a = std::atoi(argw[1]);
    int b = std::atoi(argw[2]);
    std::cout << add(a,b) << std::endl;
    return 0;
}