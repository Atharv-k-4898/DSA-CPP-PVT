#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int a = 5;                                                        // Integer data type
    char ch = 'a';                                                    // Character data type
    float f = 5.5;                                                    // Float data type
    double d = 5.555555;                                              // Double data type
    bool b = true;                                                    // Boolean data type
    string str = "Hello";                                             // String data type
    long l = 1234567890;                                              // Long data type
    long long ll = 1234567890123456789;                               // Long long data type
    short s = 12345;                                                  // Short data type
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;         // Size of int
    cout << "Size of char: " << sizeof(ch) << " bytes" << endl;       // Size of char
    cout << "Size of float: " << sizeof(f) << " bytes" << endl;       // Size of float
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;      // Size of double
    cout << "Size of bool: " << sizeof(b) << " bytes" << endl;        // Size of bool
    cout << "Size of string: " << sizeof(string) << " bytes" << endl; // Size of string
    cout << "Size of long: " << sizeof(l) << " bytes" << endl;        // Size of long
    cout << "Size of long long: " << sizeof(ll) << " bytes" << endl;  // Size of long long
    cout << "Size of short: " << sizeof(s) << " bytes" << endl;       // Size of short
    return 0;
}