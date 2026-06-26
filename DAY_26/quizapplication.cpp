// Program to create the quiz application:
// Steps:
// Step 1: Display multiple-choice questions.
// Step 2: Accept the user's answer for each question.
// Step 3: Compare the answer with the correct option.
// Step 4: Increase the score for every correct answer.
// Step 5: Repeat for all questions.
// Step 6: Display the final score.
// Time Complexity: O(n)
// (where n is the number of questions)

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int answer;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "Q1. What is the capital of India?\n";
    cout << "1. Mumbai\n";
    cout << "2. New Delhi\n";
    cout << "3. Kolkata\n";
    cout << "4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2)
    {
        score++;
    }

    // Question 2
    cout << "\nQ2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n";
    cout << "2. CSS\n";
    cout << "3. C++\n";
    cout << "4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 3)
    {
        score++;
    }

    // Question 3
    cout << "\nQ3. How many days are there in a leap year?\n";
    cout << "1. 365\n";
    cout << "2. 366\n";
    cout << "3. 364\n";
    cout << "4. 360\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 2)
    {
        score++;
    }

    cout << "\n===== RESULT =====\n";
    cout << "Your Score = " << score << " / 3";

    return 0;
}

/*
Output:
===== QUIZ APPLICATION =====

Q1. What is the capital of India?
1. Mumbai
2. New Delhi
3. Kolkata
4. Chennai
Enter your answer: 2

Q2. Which language is used for C++ programming?
1. HTML
2. CSS
3. C++
4. SQL
Enter your answer: 3

Q3. How many days are there in a leap year?
1. 365
2. 366
3. 364
4. 360
Enter your answer: 2

===== RESULT =====
Your Score = 3 / 3
*/