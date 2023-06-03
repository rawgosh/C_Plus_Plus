#include <iostream>
#include <ctime>

int main()
{
    srand(time(0)); //current time as a seed

    int num = rand() % 5 + 1;

    switch(num)
    {
        case 1:
            std::cout << "Happy New Year";
            break;
        case 2:
            std::cout << "Happy New Year";
            break;
        case 3:
            std::cout << "Happy New Year";
            break;
        case 4:
            std::cout << "Happy New Year";
            break;
        case 5:
            std::cout << "Congratulation, Happy New year";
            break;
    }


    return 0;
}