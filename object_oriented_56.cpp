// object -> collection of attributes or methods

#include <iostream>

class Human
{
    public:
        std::string name;
        std::string occupation;
        int age;
        std::string description = "Alive"; // creating a default value

        // Class methods that perform actions for a Human object
        void eat()
        {
            std::cout << "This person is eating" << std::endl;
        }
        void drink()
        {
            std::cout << "This person is drinking" << std::endl;
        }
        void sleep()
        {
            std::cout << "This person is sleeping" << std::endl;
        }
};

int main()
{
    // Declare an object of class Human
    Human human1;

    std::cout << "Enter a name: ";
    std::getline(std::cin >> std::ws, human1.name);
    std::cout << "Enter a occupation: ";
    std::getline(std::cin >> std::ws, human1.occupation);
    std::cout << "Enter an age: ";
    std::cin >> human1.age;

    std::cout << std::endl << std::endl;

    std::cout << "Name: " << human1.name << std::endl;
    std::cout << "Occupation: " << human1.occupation << std::endl;
    std::cout << "Age: " << human1.age << std::endl;
    std::cout << "Status: " << human1.description << std::endl;
    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}