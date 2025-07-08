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

bool comp(pair<int, int> a, pair<int, int> b) {
    // Custom comparator function to sort pairs based on the second element
    if (a.second < b.second) {
        return true; // If second elements are equal, sort by first element
    }
    if(a.second > b.second) {
        return false; // If second elements are not equal, sort by second element
    }

    // Means both are equal
    if(a.first > b.first) {
        return true; // Sort by first element if second elements are equal
    }
    return false; // Sort by second element
}
int main()
{
    // Inbuilt sort function in C++
    vector<int> arr = {5, 2, 8, 1, 4};
    cout << "Original array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    sort(arr.begin(), arr.end()); // Sort the array in ascending order
    cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " "; // Print each element in the sorted array
    }
    cout << endl;
    sort(arr.begin(), arr.end(), greater<int>()); // Sort the array in descending order
    cout << "Sorted array in descending order: ";
    for (int i : arr) {         
        cout << i << " "; // Print each element in the sorted array
    }
    cout << endl;

    // Custom Comparator
    pair<int, int> arr2[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(begin(arr2), end(arr2), comp);

    cout << "Sorted pairs based on second element: ";
    for (const auto& p : arr2) {
        cout << "(" << p.first << ", " << p.second << ") "; // Print each
    }
    cout << endl;



   //    __builtin_popcount(5); // Example of using a built-in function to count set bits in an integer
    cout << "Number of set bits in 7: " << __builtin_popcount(7) << endl;


    // For long long integers, use __builtin_popcountll
    cout << "Number of set bits in 150002134: " << __builtin_popcountll(150002134) << endl;




    /// Next permutation

    string str = "adc";
    do{
        cout << str << " "; // Print each permutation of the string
    }while(next_permutation(str.begin(), str.end()));
    cout << endl;
    return 0;

}