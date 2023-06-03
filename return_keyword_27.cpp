// return -> returns a value back to the spot where you called the encompassing function

#include <iostream>
#include <cmath>

double square(double num) // function that recieves value as a double
{
    return (pow(num,2)); // returns a value
}
std::string name(std::string firstname, std::string lastname) // parameter names can be different than the passed one but not the data type
{
    std::cout << "Hello, " << firstname << " " << lastname << ":)";
}

int main()
{
    double num;

    std::cout << "Enter a number to find out the square :";
    std::cin >> num;

    std::cout << "Square of " << num << " = " << square(num);
    std::cout << std::endl;

    std::string first_name, last_name;

    std::cout << "First name: ";
    std::getline(std::cin >> std::ws, first_name);
    std::cout << "Last name: ";
    std::getline(std::cin >> std::ws, last_name);

    name(first_name, last_name);

    return 0;     

}