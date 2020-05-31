#include <iostream>   // What do you think?
#include <string>     // For the name
#include <cstdlib>    // For the random number generation
#include <ctime>      // To help "seed" the number generation
#include "casino.hpp" // Method declaration

using namespace std; // Because I feel like it

int main()
{
    // Variables
    string name; // Name...
    int balance; // Total balance
    int bet;     // Total player bet
    int guess;   // Player guess
    int dice;    // Holds the random number
    char replay; // Asks if player wants to play again
    // One more variable is declared later in the code

    // "Seed" the random generator
    srand(time(0));

    // Base output and explanation
    cout << endl
         << "Casino Game" << endl
         << endl;
    rules();

    // Basic input
    // Name
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << endl;
    // Total balance
    cout << "What is your balance?" << endl
         << "$";
    cin >> balance;
    cout << endl;

    // Variable that holds the starting balance throughout the game
    int const startBalance = balance;

    // Do loop to start game
    do
    {
        // Do loop to check if you have enough balance
        do
        {
            // Bet amount input
            cout << "How much do you want to bet?" << endl
                 << "$";
            cin >> bet;
            cout << endl;

            // If amount is too high, try again
            if (bet > balance)
            {
                cout << "You do not have enough money to bet this amount! Try again." << endl
                     << endl;
            }
        } while (bet > balance);

        // Do loop to ask you for your bet until you have a good bete
        do
        {
            // Guess input
            cout << "Which number between 1 to 10, inclusive, do you want to bet on?" << endl;
            cin >> guess;
            cout << endl;

            // If guess is too high or low, try again
            if (guess < 0 || guess > 10)
            {
                cout << "That guess is not between 1 and 10! Try again." << endl
                     << endl;
            }
        } while (guess < 0 || guess > 10);

        // Randomly generates number
        dice = rand() % 10 + 1;

        cout << "The number was: " << dice << endl
             << endl;

        // Checks if you're correct, then goes on from there
        if (guess == dice)
        {
            cout << "Congratulations! You got the number right!" << endl
                 << endl;

            // Adds amount to balance
            bet *= 10;
            balance += bet;
        }
        else
        {
            cout << "Oof, you got it wrong. Better luck next time!" << endl
                 << endl;

            // Subtracts bet from balance
            balance -= bet;
        }

        // Sets balance to 100 if you have no money left
        if (balance <= 0)
        {
            cout << "You have run out of money! Why don't we give $100 keep going?" << endl
                 << endl;
            balance = 100;
        }

        // Displays current balance, and asks if you want to go again
        cout << "Your balance is now $" << balance << endl
             << endl
             << "Would you like to replay? (Y/N)" << endl;
        cin >> replay;
        cout << endl;
    } while (replay == 'Y' || replay == 'y');

    // Final words
    cout << "Thank you for playing my casino game! Come back again! Your balance is $" << balance << " and you, " << name << ", ";

    // Varying words depending on how you did
    if (balance > startBalance)
    {
        cout << "earned $" << balance - startBalance << "." << endl
             << endl;
    }
    if (balance < startBalance)
    {
        cout << "lost $" << startBalance - balance << "." << endl
             << endl;
    }
    if (balance == startBalance)
    {
        cout << "earned nothing." << endl
             << endl;
    }
    cout << "This casino game was created by Chrono Inferna" << endl
         << endl;
}

void rules()
{
    cout << "Rules:" << endl
         << "-Choose a number between 1 and 10." << endl
         << "-If you win, you multiply your bet by 10." << endl
         << "-If you lose, you lose the money you bet." << endl
         << "-Don't use any commas or dollar signs when entering numbers." << endl
         << "-You must input everything in the correct format, otherwise the program will not work." << endl
         << endl;
}