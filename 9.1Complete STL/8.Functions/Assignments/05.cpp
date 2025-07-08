#include <iostream>
using namespace std;
int main() {
    unsigned int n = 29; // binary: 11101
    int count = __builtin_popcount(n); // counts the number of 1s
    cout << "Set bits: " << count << endl;
    return 0;
}// complexity is O(1) here..
