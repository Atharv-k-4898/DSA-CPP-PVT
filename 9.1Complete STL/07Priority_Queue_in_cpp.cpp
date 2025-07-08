#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <queue> // Include the priority queue header
#include <list>
#include <stack>
#include <deque>
using namespace std;
int main()
{
    // Default priority queue in C++ is a max-heap
    //  Max Heap means max element is at the top
    priority_queue<int> pq; // Declare a max-heap priority queue
    pq.push(5);
    pq.push(8);
    pq.push(10);
    pq.push(3);
    pq.push(1);

    cout << "Max element: " << pq.top() << endl; // Display the maximum element
    pq.pop(); // Remove the maximum element
    cout << "After popping, max element: " << pq.top() << endl; //

    // We can manupulate the priority queue to create a min-heap
    // Min Heap means min element is at the top

    priority_queue<int, vector<int>, greater<int>> minHeap; // Declare a min-heap priority queue
    minHeap.push(5);
    minHeap.push(8);
    minHeap.push(-99);
    minHeap.push(3);

    cout << "Min element: " << minHeap.top() << endl; // Display the minimum element
    minHeap.pop(); // Remove the minimum element
    cout << "After popping, min element: " << minHeap.top() << endl;


    // Time Complexity:
    // Push: O(log n)
    // Pop: O(log n)
    // Top: O(1)
    // Size: O(1)

    return 0;
}