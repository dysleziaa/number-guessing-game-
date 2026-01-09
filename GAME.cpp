#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    char playAgain;

    do
    {
        int secretNumber = 1 + (rand() % 100);
        int userGuess = 0;
        int attempts = 0;
        const int MAX_ATTEMPTS = 5;

        cout << "\nI have picked a number between 1 to 100.\n";
        cout << "You have " << MAX_ATTEMPTS << " tries to guess it!\n\n";

        while (userGuess != secretNumber)
        {
            if (attempts == MAX_ATTEMPTS)
            {
                cout << "\n[GAME OVER] YOU RAN OUT OF TRIES!\n";
                cout << "The secret number was: " << secretNumber << endl;
                break;
            }

            cout << "Attempt " << (attempts + 1) << ": Enter your guess: ";
            cin >> userGuess;
            attempts++;

            if (userGuess > secretNumber)
            {
                cout << "Too high!\n";
            }
            else if (userGuess < secretNumber)
            {
                cout << "Too low!\n";
            }
            else
            {
                cout << "\nYOU WIN! You got it in " << attempts << " tries!\n";
            }
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing! Goodbye!\n";
    return 0;
}