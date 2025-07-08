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
class Solution {
public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for(int i = 0; i < n-1; i++) {
            int mini = i;
            for(int j = i + 1; j < n; j++) {
                if(arr[j] < arr[mini]) {
                    mini = j;
                }
            }
            swap(arr[i], arr[mini]);
        }
    }
};


int main()
{
    Solution sol;
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    sol.selectionSort(arr); // Call the selection sort function
    cout << "Sorted array: ";       
    for (int i : arr) {
        cout << i << " "; // Print each element in the sorted array
    }
    cout << endl;
    return 0;
}