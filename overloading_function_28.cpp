#include <iostream>

void weather();
void weather(int temp); //function name can be same but the parameters must be different because the parameter is the signature of the function

int main()
{
    weather();
    weather(23);
    return 0;
}

void weather()
{
    std::cout << "Weather is cold \n";
}
void weather(int temp)
{
    std::cout << "Its " << temp << " C.";
}