#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <stack> // Include the stack header
#include <list>
#include <deque>
#include <queue>
using namespace std;

int main()
{
    stack<int> s; // Declare a stack of integers
    s.push(10); // Push 10 onto the stack
    s.push(20); // Push 20 onto the stack
    s.emplace(30); // Push 30 onto the stack

    // Display the top element of the stack
    cout << "Top element: " << s.top() << endl;

    // Pop the top element from the stack
    s.pop();
    cout << "After popping, top element: " << s.top() << endl;

    // Check if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Display the size of the stack
    cout << "Size of stack: " << s.size() << endl;

    // Swapping two stacks
    stack<int> s2;
    s2.push(100);
    s2.push(200);
    cout << "Before swap, s2 top: " << s2.top() << endl
                << "s top: " << s.top() << endl;
    s.swap(s2); // Swap the contents of s and s2
    cout << "After swap, s2 top: " << s2.top() << endl
                << "s top: " << s.top() << endl;    
    return 0;
}