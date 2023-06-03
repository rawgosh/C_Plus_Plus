/*
Abstraction -> hiding unnecessary data from outside a code
getter -> function that makes the private attribute readable
setter -> funstion that makes the private attribute writeable
*/

#include <iostream>

class Weather
{
    private:
        int temperature = 0; // this cannot be edited outside the code
    public:

    Weather(int temperature) // creating a constructor
    {
        setTemperature(temperature); // invoking the setter function
    }

    int getTemperature() // makes the above code only readable
    {
        return temperature;
    }

    void setTemperature(int temperature)
    {
        if (temperature < 0) // if temperature is less than 0 then the value is set to 0
        {
            this -> temperature = 0;
        }
        else if (temperature >= 100)  // if temperature is more than 1000 then the value is set to 100
        {
            this -> temperature = 100;
        }
        else  // if temperature is in between 0 and 100 then the value is set to that number
        {
            this -> temperature = temperature;
        }
    }
};

int main()
{
    Weather temp(56); // passing the value for the constructor

    /*std::cout << "Temperature is " << temp.temperature;
    this code doesnot run because the parameter is private*/

    std::cout << "Temperature is " << temp.getTemperature() << std::endl; //can only read

    temp.setTemperature(45); // setting the temperature

    std::cout << "Temperature is " << temp.getTemperature() << std::endl; //editable

    return 0;
}