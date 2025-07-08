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
#include <set> // Include the set header
// Multiset allows duplicate elements
// It is similar to set but allows multiple occurrences of the same element
int main()
{
    multiset<int> ms; // Declare a multiset of integers
    ms.insert(10); // Insert elements into the multiset
    ms.insert(20); // Emplace is used to insert elements
    ms.insert(20); // Duplicate elements are allowed in a multiset
    ms.insert(20);
    ms.insert(30);

    // Display the elements in the multiset
    cout << "Elements in the multiset: ";

    for (const auto& elem : ms) {
        cout << elem << " "; // Print each element in the multiset
    }
    cout << endl;

    // Erase an element from the multiset
    ms.erase(20); // Erase all occurrence of 20
    cout << "After erasing 20, the multiset contains: ";
    for (const auto& elem : ms) {
        cout << elem << " "; // Print each element in the multiset
    }
    cout << endl;

    //But if We dont want to erase all the alements then we can use erase with iterator

    ms.insert(20); // Reinsert 20 to demonstrate iterator erase
    ms.insert(20); // Reinsert 20 to demonstrate iterator erase
    ms.insert(20); // Reinsert 20 to demonstrate iterator erase

    // Erase two occurrences of 20
    auto it = ms.find(20);
    for (int i = 0; i < 2 && it != ms.end(); ++i) {
        it = ms.erase(it); // erase returns iterator to the next element
        it = ms.find(20);  // find next occurrence of 20
    }

    // Output multiset
    cout << "After erasing two occurrences of 20, the multiset contains: ";
    for (const auto& elem : ms) {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}