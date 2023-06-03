// switch -> alternative to many (else if) statements 

#include <iostream>

int main()
{
    int month;
    std::cout << "Enter a month using (1-12) :";
    std::cin >> month;

    switch(month)
    {
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
            case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "What is this number?";
    }
    std::cout << '\n';
    char grade;
    std::cout << "Give your grade in Letter :";
    std::cin >> grade;

    switch(grade)
    {
        case 'A':
            std::cout << "Excellent";
            break;
        case 'B':
            std::cout << "Nice";
            break;
        case 'C':
            std::cout << "Good";
            break;
        case 'D':
            std::cout << "Need to work harder";
            break;
        case 'E':
            std::cout << "You failed";
            break;
        default:
            std::cout << "Enter a grade";

    }


    return 0;
}