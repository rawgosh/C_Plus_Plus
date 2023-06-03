/*
typedef -> reserved keyword used to create an additional name for another data type.
New identifier for an existing type, helps with readability and reduces typos
*/

#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // creating a new name for the pairlist datatype

//typedef std::string text_t;
using text_t = std::string;

//typedef int number_t;
using number_t = int;

//we can use both typedef or using method

int main()
{
    text_t firstName = "Ragosh"; //this variable takes the standard string datatype
    std::cout<<firstName<<'\n';

    number_t age = 18;
    std::cout<<age<<'\n';


    pairlist_t pairlist;
    return 0;
}