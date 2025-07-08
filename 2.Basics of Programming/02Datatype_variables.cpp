#include <iostream>
using namespace std;
int main()
{
    int a = 5;        // Integer data type
    char ch = 'a';    // Character data type
    char ch1 = '256'; // This gives us an error as 0-255 characters can be stored only and hence overflow occurs.
    // So character can store only till 255 characters 256 is not a character.
    char ch3 = 255;
    cout << ch3 << endl; // This will print the character corresponding to 255 in ASCII table.
    return 0;
}