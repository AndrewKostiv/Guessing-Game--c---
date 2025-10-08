#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>

int getRandomNumber(int max, int min)
{
    return rand() % (max - min + 1) + min;
}

int main()
{
    srand(time(0));
    int number = getRandomNumber(100, 1);
    int userGuess;
    std::cout << "Debug: " << number << std::endl;

    while (userGuess != number)
    {
        std::cout << "Guess a number: " << std::endl;
        std::cin >> userGuess;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Try again." << std::endl;
            continue;
        }
        if (userGuess > number)
        {
            std::cout << userGuess << " is too High" << std::endl;
        }
        else if (userGuess < number)
        {
            std::cout << userGuess << " is too Low" << std::endl;
        }
        else
        {
            std::cout << userGuess << " is correct!" << std::endl;
        }
    }

    return 0;
}
