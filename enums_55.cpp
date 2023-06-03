// enums -> user defined data type that consists of paired named-integer constants
#include <iostream>

enum Day{Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

int main()
{
    Day week = Sunday;

    switch (week)
    {
        case Sunday:
            std::cout << "Sunday" << std::endl;
            break;
        case Monday:
            std::cout << "Monday" << std::endl;
            break;
        case 3:
            std::cout << "Tuesday" << std::endl;
            break;
        case 4:
            std::cout << "Wednesday" << std::endl;
            break;
        case 5:
            std::cout << "Thursday" << std::endl;
            break;
        case 6:
            std::cout << "Friday" << std::endl;
            break;
        case Saturday:
            std::cout << "Saturday" << std::endl;
            break;
    }

    return 0;
}