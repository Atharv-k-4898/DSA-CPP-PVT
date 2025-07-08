#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    // Implicit means compiler itself does the conversion
    // e.g 1.5 + 2.5 = 4.0
    int a = 5;
    float b = 2.5;
    // Implicit conversion
    cout << (a + b) << endl; // 7.5
    // Here 5 is converted to 5.00

    // Explicit means we are doing the conversion
    int c = a + b;
    cout << c << endl; // 7.0
    // Here 7.5 is converted to 7 due to your explicit conversion

    // Char to int
    char ch = 'A';
    cout << (int)ch << endl;
    cout << (float)ch + 1.578 << endl;

    int z = 97;
    cout << (char)z << endl;
    cout << (char)z + 1 << endl;

    // Imp
    cout<<(int)9.9<<endl;// ans is 9 not 10 ..
    cout<<(int)9.99999999999999999<<endl;// ans is 10 not 9..

    cout<<9/4<<endl;// ans is 2
    cout<<9.0/4<<endl;// ans is 2.25
    cout<<9.0/4.0<<endl;// ans is 2.25

    // int / int = int
    // int / float = float  
    // float / int = float
    // float / float = float
    // int / double = double
    // double / int = double
    // double / double = double
    // int / char = int
    // char / int = int
    // char / char = int
    return 0;
}