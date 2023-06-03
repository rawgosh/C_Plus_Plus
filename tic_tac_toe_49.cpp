#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *spaces)
{
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  "<< spaces[1] <<"  |  "<< spaces[2] <<"  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  "<< spaces[4] <<"  |  "<< spaces[5] <<"  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  "<< spaces[7] <<"  |  "<< spaces[8] <<"  " << endl;
    cout << "     |     |     " << endl;
    
}
void playerMoves(char *spaces, char player)
{
    int number;

    do
    {
        cout << "Enter a spot number(1-9) :";
        cin >> number;
        number--; // decreases because the array starts from 0

        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }

    } while (!number > 0 || !number < 8);
    
}
void computerMoves(char *spaces, char computer)
{
    int number;
    srand(time(NULL));

    while (true)
    {
        number = rand() % 9; // it will generate a random number between 0 and 8
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer) // it will return boolean value
{
    // first row
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player ? cout << "You win!\n" : cout << "Computer wins!\n"; // ternary operator
    }
    // second row
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? cout << "You win!\n" : cout << "Computer wins!\n";
    }
    // third row
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? cout << "You win!\n" : cout << "Computer wins!\n";
    }
    // first column
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? cout << "You win!\n" : cout << "Computer wins!\n";
    }
    // second column
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? cout << "You win!\n" : cout << "Computer wins!\n";
    }
    // third column
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? cout << "You win!\n" : cout << "Computer wins!\n";
    }
    // first diagonal
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? cout << "You win!\n" : cout << "Computer wins!\n";
    }
    // second diagonal
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[6] == player ? cout << "You win!\n" : cout << "Computer wins!\n";
    }
    else
    {
        return false;
    }
    return true;
}
bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    cout << "Its a TIE!" << endl;
    return true;
}
int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    // to draw a board
    drawBoard(spaces); //when we pass an array to a function it decays into a pointer

    while (running)
    {
        playerMoves(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces,player,computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        
        computerMoves(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces,player,computer))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }
    cout << endl;
    cout << "Thanks for playing";

    return 0;
}