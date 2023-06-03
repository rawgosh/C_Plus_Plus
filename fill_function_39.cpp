// fill() -> Fills a range of elements with a specified value
// fill(begin_address, end_address, value)
#include <iostream>

int main()
{
    std::string subjects[10] = {"computer", "computer", "computer", "computer", "computer", "computer", "computer", "computer", "computer","computer"};

    std::cout << "*********************************" << std::endl;
    std::cout << "   Without using fill function   " << std::endl;
    std::cout << "*********************************" << std::endl;
    for(std::string subject : subjects)
    {
        std::cout << subject << std::endl;
    }

    const int SIZE = 100;
    std::cout << "*********************************" << std::endl;
    std::cout << "       Using fill function       " << std::endl;
    std::cout << "*********************************" << std::endl;
    std::string courses[SIZE];
    fill(courses, courses + SIZE, "computer");
    for(std::string course : courses)
    {
        std::cout << course << std::endl;
    }

    std::cout << "*********************************" << std::endl;
    std::cout << "       printing only half       " << std::endl;
    std::cout << "*********************************" << std::endl;
    std::string books[SIZE];
    fill(books, books + (SIZE/2), "computer"); // fils first half with "computer"
    fill(books + (SIZE/2), books + SIZE, "science"); // fills second half with "science"
    for(std::string book : books)
    {
        std::cout << book << std::endl;
    }

    return 0;
}