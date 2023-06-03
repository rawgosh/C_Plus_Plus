#include <iostream>
#include <cmath>

int main()
{
    double p, b, h;
    std::cout << "Enter a height: ";
    std::cin >> p;
    std::cout << "Enter a base: ";
    std::cin >> b;

    h = sqrt(pow(p,2) + pow(b,2));
    std::cout << "h = " << h << std::endl;
    return 0;
}