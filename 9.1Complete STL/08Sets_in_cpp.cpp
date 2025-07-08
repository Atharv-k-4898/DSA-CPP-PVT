#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

//Question :
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::



int main()
{
    set<int> s; // Declare a set of integers
    s.insert(10); // Insert elements into the set
    s.emplace(20); // Emplace is used to insert elements
    s.insert(20); // Duplicate elements are ignored in a set
    s.insert(30);

    // find
    auto it = s.find(20); // Find an element in the set
    if (it != s.end()) {
        cout << "Element 20 found in the set." << endl;
    } else {
        cout << "Element 20 not found in the set." << endl;
    }

    // erase
    s.erase(20); // Erase an element from the set
    // Also
    cout << "After erasing 20, the set contains: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;
    s.erase(s.begin(), s.end()); // Erase all elements in the set

    // Iterating through the set
    cout << "Elements in the set: ";
    for (const auto& elem : s) {
        cout << elem << " "; // Print each element in the set
    }
    cout << endl;


    // Lower bound and upper bound
    s.insert(5);
    s.insert(15);
    s.insert(25);
    auto lower = s.lower_bound(10); // Find the first element not less than
    auto upper = s.upper_bound(20); // Find the first element greater than
    cout << "Lower bound of 10: " << (lower != s.end() ? to_string(*lower) : "not found") << endl;
    cout << "Upper bound of 20: " << (upper != s.end() ? to_string(*upper) : "not found") << endl;      

    return 0;
}