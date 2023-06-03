// Nested Loop -> Loop inside of a loop

#include <iostream>

int main()
{
    int a = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << a << " ";
            a++;
        }
        std::cout<<std::endl;
    }

    std::cout<<std::endl;

    for (int i = 1; i <= 8; i++)
    {
        for (int j = i; j <=8; j++)
        {
            std::cout << "# ";
        }
        std::cout << std::endl;
    }

    return 0;
}