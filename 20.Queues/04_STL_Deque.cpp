#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int size=10;
    dq.push_back(10);  // Insert at rear
    dq.push_back(20);
    dq.push_front(30); // Insert at front
    dq.push_front(40);
    dq.push_back(50);

    cout << "Size: " << dq.size() << endl;  // Should print 5
    cout << "Front: " << dq.front() << endl; // Should print 40
    cout << "Rear: " << dq.back() << endl;   // Should print

    //pop
    dq.pop_front(); // Remove from front
    dq.pop_back();  // Remove from rear 

    cout << "Size after pop: " << dq.size() << endl;  // Should print 3
    cout << "Front after pop: " << dq.front() << endl; // Should print
    cout << "Rear after pop: " << dq.back() << endl;   // Should print 50
    dq.push_front(60); // Insert at front
    dq.push_back(70);  // Insert at rear
    cout << "Size after more inserts: " << dq.size() << endl;  // Should print 5
    cout << "Front after more inserts: " << dq.front() << endl; // Should
    cout << "Rear after more inserts: " << dq.back() << endl;   // Should print 70

    // Iterate through the deque
    cout << "Elements in deque: ";
    for (int elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    // Clear the deque
    dq.clear();
    cout << "Size after clear: " << dq.size() << endl;  
    // Should print 0
    if (dq.empty()) {
        cout << "Deque is empty" << endl;  // Should print this
    } else {
        cout << "Deque is not empty" << endl;
    }
    return 0;
}
