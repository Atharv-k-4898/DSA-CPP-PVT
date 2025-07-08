#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <unordered_map> // Include the unordered_map header
#include <unordered_set> // Include the unordered_set header
#include <queue>
    
using namespace std;



int main()
{
    unordered_map<string, int> umap; // Declare an unordered map
    umap["apple"] = 1; // Insert elements into the unordered map
    umap["banana"] = 2; // Emplace is used to insert elements
    umap.emplace("cherry", 3); // Insert using emplace  
    umap.insert({"date", 4}); // Insert using initializer list
    // Printing elements in the unordered map
    cout << "Elements in the unordered map: ";
    for (const auto& elem : umap) { 
        cout << "(" << elem.first << ", " << elem.second << ") "; // Print each element
    }
    cout << endl;

    // Method 2
    unordered_map<string, int> umap2 = {{"elderberry", 5},
                                        {"fig", 6},
                                        {"grape", 7}};   
    cout << "Elements in the unordered map: ";
    for (const auto& elem : umap2) {
        cout << "(" << elem.first << ", " << elem.second << ") "; // Print each
    }
    cout << endl;

    // All other unordered map operations like find, erase, etc. are similar to map
    // Example of finding an element
    string key = "banana";
    auto it = umap.find(key);
    if (it != umap.end()) {
        cout << "Found " << key << " with value: " << it->second <<
    endl;
    } else {
        cout << key << " not found in the unordered map." << endl;
    }

    return 0;
}