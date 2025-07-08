#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter The 2 nos ." << endl;
    cin >> a >> b;
    char ch;
    cout << "Enter Operation" << endl;
    cin >> ch;
    if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
    {
        cout << "Invalid operation" << endl;
        return 1;
    }
    float result;
    switch (ch)// HERE ONLY INT AND CHAR VALUES ARE ALLOWED
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
        // default:
        //  This will always run;
        //  break;
    }
    cout << "Result: " << result << endl;
    return 0;
}