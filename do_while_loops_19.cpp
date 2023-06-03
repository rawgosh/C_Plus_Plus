// do while loop -> does some block of code first then repeats again if the condition is true

#include <iostream>

int main()
{
    int num;

    do
    {
        std::cout << "Enter a number :";
        std::cin >> num;
    }
    while (num == 0);

    std::cout << "The number is :" << num;

    return 0;
}