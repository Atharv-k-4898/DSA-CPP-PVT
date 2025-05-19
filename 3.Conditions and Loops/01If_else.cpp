#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age; // Taking input from user
    if (age >= 18)
    {                                                // If age is greater than or equal to 18
        cout << "You are eligible to vote." << endl; // Print eligible to vote
    }
    else
    {                                                    // Else part of if statement
        cout << "You are not eligible to vote." << endl; // Print not eligible to vote
    }
    // Nested if-else statement
    if (age >= 18)
    { // If age is greater than or equal to 18
        if (age >= 21)
        {                                              // If age is greater than or equal to 21
            cout << "You can vote and drink." << endl; // Print can vote and drink
        }
        else
        {                                                     // Else part of if statement
            cout << "You can vote but cannot drink." << endl; // Print can vote but cannot drink
        }
    }
    else
    {                                                    // Else part of if statement
        cout << "You are not eligible to do any thing." << endl; // Print not eligible to vote
    }
    return 0;
}