#include <iostream>
#include <ctime>

char userChoice();
char computerChoice();
void showChoice(char choice);
void winner(char player, char computer);

int main()
{
    std::cout << "************************\n";
    std::cout << "Rock Paper Scissor Game!\n";
    std::cout << "************************\n";
    std::cout << "--------------------------\n";
    std::cout << "| 'r' or 'R' for rock    |\n";
    std::cout << "| 'p' or 'P' for paper   |\n";
    std::cout << "| 's' or 'S' for scissor |\n";
    std::cout << "--------------------------\n";


    char player;
    char computer;

    player = userChoice(); // calling a function using a variable
    std::cout << "Your choice is :";
    showChoice(player); // using the variable as the parameter for the function 

    computer = computerChoice();
    std::cout << "Computer's choice is :";
    showChoice(computer);

    winner(player, computer);

    return 0;
}

char userChoice()
{
    char player;

    do
    {
        std::cout << "Enter your choice here :";
        std::cin >> player;
    } while (player != 'r' && player != 's' && player != 'p' && player != 'R' && player != 'S' && player != 'P'); // checking using logical operators

    return player; // returns the choosed character

}

char computerChoice()
{
    srand(time(NULL)); // to create a random number

    int num;
    num = rand() % 3 + 1;

    switch(num)
    {
        case 1:
            return 'r'; // no need break because we already returned
        case 2:
            return 'p';
        case 3:
            return 's';
    }


    return 0;

}

void showChoice(char choice)
{
    switch(choice)
    {
        case 'r': // if multiple case has same outcome
        case 'R':
            std::cout << "Rock\n";
            break;
        case 'p':
        case 'P':
            std::cout << "Paper\n";
            break;
        case 's':
        case 'S':
            std::cout << "Scissor\n";
            break;
    }
}

void winner(char player, char computer) 
{
    switch(player)
    {
        case 'r':
        case 'R':
            if (computer == 'r')
            {
                std::cout << "It's a tie!\n";
            }
            else if (computer == 'p')
            {
                std::cout << "Computer wins!\n";
            }
            else
            {
                std::cout << "Player wins!\n";
            }
            break;
        case 'p':
        case 'P':
            if (computer == 'p')
            {
                std::cout << "It's a tie!\n";
            }
            else if (computer == 's')
            {
                std::cout << "Computer wins!\n";
            }
            else
            {
                std::cout << "Player wins!\n";
            }
            break;
        case 's':
        case 'S':
            if (computer == 's')
            {
                std::cout << "It's a tie!\n";
            }
            else if (computer == 'r')
            {
                std::cout << "Computer wins!\n";
            }
            else
            {
                std::cout << "Player wins!\n";
            }
            break;
    }
}

