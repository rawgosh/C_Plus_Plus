// constructor -> special method that is automatically called when an object is instantiated

#include <iostream>

class Computer
{
    public:
        std::string name;
        std::string model;
        int year; 
    
     // Constructor for the class
    Computer(std::string name, std::string model, int year)
    {
        // Assign the input parameters to the corresponding data members
        this->name = name; // we need to use this-> to refer to the object's data member and not the input parameter
        this->model = model;
        this->year = year;
    }
};

int main()
{
    Computer pc("HP","Omen",2023);

    std::cout << pc.name << std::endl;
    std::cout << pc.model << std::endl;
    std::cout << pc.year << std::endl;



    return 0;
}