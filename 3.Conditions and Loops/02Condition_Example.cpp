#include <iostream>
using namespace std;
int main()
{
    int score;                            // Declare the score variable
    cout << "Enter the score\n " << endl; // Printing something on screen
    cin >> score;                         // Taking input from user
    // If Statement
    if (score < 300)
    {
        cout << "India wins\n"; // This will be executed only when condition of score<300 is true
    }
    cout << "Pak wins\n"; // This will be executed in both cases whether condition is true or not.
    // Condition = True -> India wins Pak wins
    // Condition = False -> Pak wins

    // If else
    if (score < 300)
    { // This will be executed when condition is true
        cout << "India wins\n";
    }
    else
    {
        cout << "Pak wins\n"; // This will be executed only when condition is false
    }
    // Nested if else
    if (score < 300)
    {
        cout << "India wins\n";
    }
    else
    {
        if (score > 350)
        {
            cout << "Both may win\n";
        }
        else
        {
            cout << "Pak wins";
        }
    }
    //  Same code with if else if and else
    if (score < 300)
    {
        // Condition is true then this block executes and then we need to go to line 46 but if false then go to line 39 for checking condition
        cout << "India wins\n";
    }
    else if (score > 350)
    {
        // Condition is true then this block executes and then go to line 46 but if false then go to else block and execute it
        cout << "Both may win\n";
    }
    else
    {
        cout << "Pak wins\n";
    }
    // This is line 46
}