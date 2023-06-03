// function -> a block of reusable code

#include <iostream>

void code(std::string name, int temp) // void -> doesn't requires return
{
    std::cout << "Happy coding :) " << name << std::endl;
    std::cout << "Its "<< temp << " C outside :[";
}

int main()
{
    std::string name = "User";
    int temp = 18;
    code(name, temp); // calling the function with the argument

    return 0;
}