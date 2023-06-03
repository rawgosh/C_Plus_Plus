// overloaded constructor -> multiple constructor with same name but different parameters

#include <iostream>

class Car
{
    public:
        std::string name;
        std::string color;
    
    // constructor with no parameter
    Car()
    {

    }
    // constructor with one parameter
    Car(std::string name)
    {
        this -> name = name; 
    }
    // constructor with two parameters
    Car(std::string name, std::string color)
    {
        this -> name = name;
        this -> color = color;
    }
};

int main()
{
    Car car1(); // passing no parameter
    Car car2("BMW"); // passing one parameter
    Car car3("Dodge","Metallic Black"); // passing two parameters

    std::cout << car2.name << std::endl;

    std::cout << std::endl;

    std::cout << car3.name << std::endl;
    std::cout << car3.color << std::endl;

    return 0;
}