#include <iostream>
using namespace std;

int main()
{
    /*The const keyword specifies that a variable's value is constant and tells the compiler to prevent anything from modifying it*/

    const double PI = 3.14159; // creating a constant
    double radius = 7;
    double circumference = 2 * PI * radius;

    cout << circumference << endl;

    return 0;
}