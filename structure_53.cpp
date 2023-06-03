// struct -> In C++, a struct is a composite data type that groups together zero or more variables with different data types under a single name

#include <iostream>

struct employee
{
    std::string name;
    std::string position;
    long int salary;
};

int main()
{
    employee e1; // creating an instance of the struct "employee" and assigning it to a variable "e1"
    e1.name = "Jeffery";
    e1.position = "CEO";
    e1.salary = 500000000000;

    std::cout << "Employee Name :" << e1.name << std::endl;
    std::cout << "Employee Position :"<< e1.position << std::endl;
    std::cout << "Salary :"<< e1.salary << std::endl;

    employee e2;
    e2.name = "Melon";
    e2.position = "Cool Kid";
    e2.salary = 500000000001;

    std::cout << "Employee Name :" << e2.name << std::endl;
    std::cout << "Employee Position :" << e2.position << std::endl;
    std::cout << "Salary :" << e2.salary << std::endl;


    return 0;
}