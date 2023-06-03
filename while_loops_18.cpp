#include <iostream>

int main()
{
    std::string name;
    int num = 0;

    while(name.empty()) // runs continiously till the condition is satisfied
    {
        std::cout << (num + 1) << std::endl;
        num++;
    }

    return 0;
}