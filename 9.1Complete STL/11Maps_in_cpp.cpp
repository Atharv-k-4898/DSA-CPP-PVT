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
    map<int,int> m; // Declare a map of integers
    m[1] = 10; // Insert elements into the map
    m[2] = 20; // Emplace is used to insert elements
    m.emplace(3, 30); // Insert using emplace
    m.insert({4, 40}); // Insert using initializer list

    // Printing elements in the map
    cout << "Elements in the map: ";
    for (const auto& elem : m) {
        cout << "(" << elem.first << ", " << elem.second << ") "; // Print each
    }
    cout << endl;

    // Method 2
    map<int,int> m2 = {{5, 50},
                       {6, 60},
                       {7, 70}};
    cout << "Elements in the map: ";
    for(auto elem : m2){
        cout << "(" << elem.first << ", " << elem.second << ") ";
    }
    cout << endl;

    // All other map operations like find, erase, etc. are similar to set
    return 0;
}