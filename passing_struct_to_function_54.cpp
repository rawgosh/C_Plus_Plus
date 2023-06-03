#include <iostream>

struct Car
{
    std::string name;
    std::string model;
    int year;
    std::string color;
};

void presentCar(Car car) //passing a struct data type with a nickname for the argument
{
    std::cout << &car << std::endl;
    std::cout << "Name: " << car.name << std::endl;
    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Date: " << car.year << std::endl;
    std::cout << "Color: " << car.color << std::endl;
}

void paintCar(Car &car, std::string color) // we should pass it by reference in order to make changes 
{
    car.color = color;
}

int main()
{
    Car car1, car2, car3;

    car1.name = "Ford";
    car1.model = "Mustang";
    car1.year = 2020;
    car1.color = "Chrome";

    car2.name = "Lamborghini";
    car2.model = "Urus";
    car2.year = 2023;
    car2.color = "Orchid";

    car3.name = "Dodge";
    car3.model = "Challenger";
    car3.year = 2021;
    car3.color = "Matte Black";

    paintCar(car1,"Gold");

    presentCar(car1); //passing the structure variable "car1" as an argument
    std::cout << std::endl;
    presentCar(car2);
    std::cout << std::endl;
    presentCar(car3);
    std::cout << std::endl;

    return 0;
}