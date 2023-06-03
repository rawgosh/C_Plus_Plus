#include <iostream>
#include <cmath>

int main()
{
    double x = 2.39;
    double y = 3;
    double z;

    z = std::max(x,y); // maximum between two different numbers
    std::cout << z << '\n';

    z = std::min(x,y); // minimum between two different numbers
    std::cout << z << '\n';

    z = pow(2 , 4); // 2 ^ 4
    std::cout << z << '\n';

    z = sqrt(4); // square root  
    std::cout << z << '\n';

    z = abs(-34); // absolute value
    std::cout << z << '\n';

    z = round(x); // rounds to the nearest number without decimal
    std::cout << z << '\n';

    z = ceil(x); // rounds to just greater number
    std::cout << z << '\n';

    z = floor(x); // rounds to just smaller number
    std::cout << z << '\n';

    return 0;
}