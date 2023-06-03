#include <iostream>

// passing by value
void swap(std::string x, std::string y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

//passing by reference -> requires the memory address of the value
void ref(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    std::string laptop = "Mac";
    std::string phone = "I-Phone";
    
    ref(laptop, phone);

    std::cout << "Laptop: " << laptop << std::endl;
    std::cout << "Phone: " << phone << std::endl;

    return 0;
}