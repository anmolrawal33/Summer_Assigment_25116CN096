// Program to create a number guessing game:
// Steps:
// Step 1: Set a secret number.
// Step 2: Ask the user to guess the number.
// Step 3: Compare the guessed number with the secret number.
// Step 4: If the guess is too small, display "Too Low".
// Step 5: If the guess is too large, display "Too High".
// Step 6: Repeat until the correct number is guessed.
// Step 7: Display the number of attempts taken.
// Time Complexity: O(n)
// (where n is the number of guesses)

#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 45;
    int guess, attempts = 0;

    cout << "===== Number Guessing Game =====\n";
    cout << "Guess a number between 1 and 100\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if(guess < secretNumber)
        {
            cout << "Too Low!\n";
        }
        else if(guess > secretNumber)
        {
            cout << "Too High!\n";
        }
        else
        {
            cout << "Congratulations! You guessed the correct number.\n";
        }

    } while(guess != secretNumber);

    cout << "Total Attempts = " << attempts;

    return 0;
}

/*
Output:
===== Number Guessing Game =====
Guess a number between 1 and 100

Enter your guess: 30
Too Low!

Enter your guess: 60
Too High!

Enter your guess: 45
Congratulations! You guessed the correct number.

Total Attempts = 3
*/