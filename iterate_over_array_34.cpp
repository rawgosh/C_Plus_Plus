#include <iostream>

int main()
{
    std::string cars[] = {"GTR","Veron","Tesla","Ferrari"};
    int a = sizeof(cars)/sizeof(std::string);

    for(int i = 0; i < a; i++)
    {
        std::cout << cars[i] << std::endl;
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (int j = 0; j < sizeof(grades)/sizeof(char); j++)
    {
        std::cout << grades[j] << std::endl;
    }
    return 0;
}