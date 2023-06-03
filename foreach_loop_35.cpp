// foreach loop -> loop that eases the traversal over an iterable data set

#include <iostream>

int main()
{
    std::string cars[] = {"GTR","Veron","Tesla","Ferrari"};

    for(std::string car : cars) // for(data_type name_for_current_element : iterable_data_set)
    {
        std::cout << car << std::endl;
    }

    return 0;
}