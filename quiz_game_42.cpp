#include <iostream>

int main()
{
    std::string question[] =   {"1. What year was C++ invented?: ",
                                "2. Who invented C++?: ",
                                "What is the predecessor of C++?: ", 
                                "4. Best theme for programming?: "};
    
    std::string option[][4] =  {{"A. 1965","B. 1975","C. 1985","D. 1995"},
                                {"A. Mark Zuckerberg","B. Bjarne Stroustrup","C. Jeffery Bezos","D. Elon Musk"},
                                {"A. C", "B. C#", "C. COBOL","D. C--"},
                                {"A. No ingles","B. Light", "C. I am blind", "D. Dark"}};
    
    std::string answer[] = {"C. 1985", "B. Bjarne Stroustrup", "A. C", "D. Dark"};

    char answerKey[] = {'C', 'B', 'A', 'D'};
    char guess;
    int score;

    int sizeof_question = sizeof(question)/sizeof(question[0]);

    std::cout << std ::endl << std::endl;
    std::cout << "***********" << std::endl;
    std::cout << "|QUIZ GAME|" << std::endl;
    std::cout << "***********" << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < sizeof_question; i++)
    {
        std:: cout << question[i] << std::endl;

        for(int j = 0; j < sizeof(option[i])/sizeof(option[i][0]); j++)
        {
            std::cout << option[i][j] << std::endl;
        }
        std::cout << "--> ";
        std::cin >> guess;
        guess = toupper(guess); // changes to upper case
        if (guess == 'A' || guess == 'B' || guess == 'C' || guess == 'D')
        {
            if (guess == answerKey[i])
            {
                score++;
            }
        }
        else
        {
            std::cout << "Error guess";
            return 0;
        }
        
        
        std::cout << std::endl;
    }
    
    std::cout << "CORRECT GUESSES: " << score << std::endl << std::endl;
    std::cout << "*********" << std::endl;
    std::cout << "|ANSWERS|" << std::endl;
    std::cout << "*********" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    for(int i = 0; i < sizeof_question; i++)
    {
        std::cout << question[i] << std::endl;
        std::cout << answer[i] << std::endl;
        std::cout << "___________________" << std::endl;
    }
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Score: " << (score/(double)sizeof_question) * 100 << "%"; // to get the answer in percentage

    return 0;
}