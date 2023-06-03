/*
type conversion -> conversion of a value of one data type to another data type
Implicit => automatic
Explicit => Precede value with new data type
*/

#include <iostream>

int main()
{
    int pi = 3.14;
    std::cout << pi << '\n'; //we will get only the number excluding the decimal and beyond. This process is implicit

    double temperature = (int) 37.6; //Explicit process
    std::cout << temperature << '\n';

    char x = 100;
    std::cout << x << '\n'; //gets an ASCII code
    std::cout << (char) 100 <<'\n'; // same as above but explicit process

    int correct = 8;
    int questions = 10;
    double score = correct /(double) questions * 100;
    std::cout << score <<"%"<< std::endl;
    
    return 0;
}