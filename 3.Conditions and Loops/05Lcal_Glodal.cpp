#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void showScopes() {
    // Local variable
    int localVar = 50;
    cout << "Inside function - Local variable: " << localVar << endl;
    cout << "Inside function - Global variable: " << globalVar << endl;
}

int main() {
    cout << "In main - Global variable: " << globalVar << endl;
    // cout << localVar; // Error: localVar is not accessible here
    showScopes();
    return 0;
}