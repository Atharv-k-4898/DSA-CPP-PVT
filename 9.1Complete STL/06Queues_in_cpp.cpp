#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <queue> // Include the queue header
#include <list>
#include <stack>
#include <deque>
using namespace std;


int main()
{
    queue<int> q; // Declare a queue of integers
    q.push(10); // Push 10 onto the queue
    q.push(20); // Push 20 onto the queue
    q.emplace(30); // Push 30 onto the queue
    cout << "Front element: " << q.front() << endl; // Display the front
    cout << "Back element: " << q.back() << endl; // Display the back

    // Operation on back
    q.back() = 40; // Change the back element to 40
    q.back()+=200; // Add 200 to the back element
    cout << "After modifying back, back element: " << q.back() << endl;

    q.pop(); // Pop the front element
    cout << "After popping, front element: " << q.front() << endl;

    // Print all elements in the queue by popping them
    queue<int> temp = q; // Make a copy to preserve original queue
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // We cant use for (auto )loop directly on queue
    // because queue does not support iterators like vector or list.
    // However, we can use a while loop to access elements.
    return 0;
}