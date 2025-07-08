#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n & 1) {
        cout << n << " is odd." << endl;
    } else {
        cout << n << " is even." << endl;
    }
    return 0;
}
// If any no and 1 is 00001 then it is even 
// If any no and 1 id 00000 then it is odd