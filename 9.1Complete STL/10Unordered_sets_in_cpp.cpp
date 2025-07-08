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
    unordered_set<int> us; // Declare an unordered set of integers
    us.insert(10); // Insert elements into the unordered set
    us.emplace(20); // Emplace is used to insert elements
    us.insert(20); // Duplicate elements are ignored in an unordered set    
    us.insert(30);
    us.insert(40);
    us.insert(50);  
    // Printing elements in the unordered set
    cout << "Elements in the unordered set: ";
    for (const auto& elem : us) {
        cout << elem << " "; // Print each element in the unordered set
    }
    cout << endl;


    // All other operations like find, erase, etc. are similar to set
    return 0;
}