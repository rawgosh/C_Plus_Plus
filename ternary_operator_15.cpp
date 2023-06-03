// ternary operator (?:) -> replacement to an if-else statement
// condition ? expression1 : expression2

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number :";
    std::cin >> num;
    (num % 2 == 0) ? std::cout << "Even" : std::cout << "Odd" << std::endl;

    bool hungry = true;
    hungry == true ? std::cout << "Eat" : std::cout << "Do not eat";
    std::cout << '\n';
    hungry ? std::cout << "Eat" : std::cout << "Do not eat";
    std::cout << '\n';
    // no need to check for boolean values
    // 1 = true, 0 = false
    std::cout << (hungry ? "EAT" : "Do not eat");
    std::cout << '\n';

    return 0;
}