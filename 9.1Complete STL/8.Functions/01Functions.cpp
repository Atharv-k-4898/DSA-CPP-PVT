#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Function is the block of code or a subprogram that can be used many times.
void calling()
{ // Unparameterized Function
    for (int i = 0; i < 5; i++)
    {
        cout << "Hii -" << i << endl;
    }
}
void calling1(int n)
{ // Parameterized Function
    for (int i = 0; i < n; i++)
    {
        cout << "Hii -" << i << endl;
    }
}
int isPrime(int n) // fun declaration
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    { /// this all function defination
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int printA();// function declaration
// If we have written fun defination below main then we have to declare it in main then call it..
int main()
{
    calling();
    int n;
    cin >> n;
    calling1(n); // Fun call
    if (isPrime(n))
    {
        cout << "Not prime";
    }
    else
    {
        cout << "Prime";
    }

    cout << endl << printA() << endl;// fun calling
    return 0;
}
int printA()//
{
    int a = 5;
    return a; /// all fun declaration
}