#include <iostream>
#include <ctime>
#include <string>

int main()
{
    int num;
    int guess;
    int tries;
    char range;
    int level;

    std::cout << "********GUESS THE NUMBER********\n";

    std::cout << std::endl;
    std::cout << ".......................\n";
    std::cout << "Type -> @ <- For 1 - 10" << std::endl;
    std::cout << "Type -> # <- For 1 - 100" << std::endl;
    std::cout << "Type -> $ <- For 1 - 1000" << std::endl;
    std::cout << "Type -> & <- For 1 - 10000" << std::endl;
    std::cout << "..........................\n";
    std::cout << "Type -> ";
    range = std::cin.get();

    switch(range)
    {
        case '@':
            level = 10;
            break;
        case '#':
            level = 100;
            break;
        case '$':
            level = 1000;
            break;
        case '&':
            level = 10000;
            break;
        default:
            std::cout << "Unknown Error !!!";
    }
    std::cout << std::endl;
    std::cout << "--------------------------------";

    srand(time(NULL));

    num = rand() % level + 1;

    do
    {
        std::cout << std::endl;
        std::cout << "Enter your guess :";
        std::cin >> guess;

        if(guess <= level && guess >= 1)
        {
            if (guess > num)
            {
                std::cout << "Your guess is higher." << std::endl;
            }
            else if (guess < num)
            {
                std::cout << "Your guess is lower." << std::endl;
            }
            else
            {
                break;
            }
            tries ++;
        }
        else
        {
            std::cout << "Not a valid guess :(" << std::endl;
        }
        

    } while (guess != num);
    
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << num << " is correct ans. :)" << std::endl;
    
    if (tries <= 1)
    {
        std::cout << "It took you " << tries << " try.";
    }
    else
    {
        std::cout << "It took you " << tries << " tries.";

    }

    std::cout << std::endl;
    std::cout << "--------------------------------";
    return 0;
}