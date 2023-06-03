// inheritance -> a class can recieve the attribute and methods from another class

#include <iostream>

class Computer
{
    public:
        bool on = true;
    
    void play()
    {
        std::cout << "YOU WANT TO PLAY LETS PLAY." << std::endl;
    }

};

class Mobile : public Computer //to inherit from the Computer class
{
    public:

    void charge()
    {
        std::cout << "BATTERY CHARGING :}" << std::endl;
    }

};

class Xbox : public Mobile // inherits from both class Computer and Mobile because Mobile class inherits from Computer class
{
    public:
    
    void heat()
    {
        std::cout << "Its heating" << std::endl;
    }
};

int main()
{
    Mobile mobile;
    Computer computer;
    Xbox xbox;

    std::cout << mobile.on << std::endl; // using the different class attribute
    mobile.play();
    mobile.charge(); // can only be accessible by the child class and not the parent class

    std::cout << xbox.on << std::endl;
    xbox.play();
    xbox.heat();
    xbox.charge();

    return 0;
}