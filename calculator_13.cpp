#include <iostream>

int main()
{
    double num1, num2;
    double add, subtract, multiply, divide;
    int symbol;
    std::cout << "Enter first number :";
    std::cin >> num1;
    std::cout << "Enter second number :";
    std::cin >> num2;

    std::cout << '\n';

    std::cout << "What do you want to do?" << std::endl;
    std::cout << "1 -> +" << std::endl;
    std::cout << "2 -> -" << std::endl;
    std::cout << "3 -> x" << std::endl;
    std::cout << "4 -> /" << std::endl;

    std::cout <<"Please enter a number for the expression: ";
    std::cin >>symbol;

    switch (symbol)
    {
        case 1:
            add = num1 + num2;
            std::cout <<"For "<< num1 << " + " << num2 << " -> Your answer is " << add;
            break;
        case 2:
            subtract = num1 - num2;
            std::cout <<"For "<< num1 << " - " << num2 << " -> Your answer is " << subtract;
            break;
        case 3:
            multiply = num1 * num2;
            std::cout <<"For "<< num1 << " x " << num2 << " -> Your answer is " << multiply;
            break;
        case 4:
            divide = num1 / num2;
            std::cout <<"For "<< num1 << " / " << num2 << " -> Your answer is " << divide;
            break;
        default:
            std::cout << "There is no answer";
    }

    return 0;
}