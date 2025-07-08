#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <list>
#include <stack> // Include the stack header
#include <list>
#include <deque>
#include <queue>
using namespace std;


int main()
{
    deque<int> dq;
    dq.push_back(1); // Add to the end
    dq.push_front(2); // Add to the front
    dq.push_back(3); // Add to the end
    dq.push_front(4); // Add to the front
    cout << "Deque elements: ";
    for (auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    dq.pop_back(); // Remove from the end
    dq.pop_front(); // Remove from the front
    cout << "After popping elements: ";
    for (auto i : dq) {
        cout << i << " ";

    }
    cout << endl;
    return 0;
}