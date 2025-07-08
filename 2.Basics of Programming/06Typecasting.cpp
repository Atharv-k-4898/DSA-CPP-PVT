#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int a = 5;
    char ch = 'a';
    cout << (int)ch << endl;
    cout << char(a) << endl;
    cout << (float)a << endl;
    cout << (double)a << endl;
    double d = 5.555555;
    cout << (int)d + 23 << endl; // 5.555555 is converted to 5 and then added to 23
    return 0;
}