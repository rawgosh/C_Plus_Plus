/*
arithmetic operators -> returns the result of a specific arithmetic operation (+ - * /)
*/
// parenthesis > multiplication & division > addition & subtraction 
#include <iostream>

int main()
{
    float num1 = 8; // float datatype
    float num2 = 9;
    int sum, product, subtraction;
    float division;
    int remainder;

    //ADDITION
    sum = num1 + num2;
    //sum += 1; -> increases sum by 1
    //sum++; -> mostly used in loops to increase the value by 1

    //SUBTRACTION
    subtraction = num1 - num2;
    //subtraction -= 2;
    //subtraction--;

    //MULTIPLICATION
    product = num1 * num2;
    //product *= 2;

    //DIVISION
    division = num1 / num2;
    //division /= 2;

    //MODULUS
    remainder = 5 % 3;

    std::cout << sum << '\n';
    std::cout << product << '\n';
    std::cout << division << '\n';
    std::cout << subtraction << '\n';
    std::cout << remainder << '\n';

    return 0;
}