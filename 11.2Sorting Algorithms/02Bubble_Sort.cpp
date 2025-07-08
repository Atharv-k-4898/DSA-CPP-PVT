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
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        int i,j,n=arr.size();
        bool isSwappedOnce=false; // Flag to check if any swap occurred
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(arr[j] > arr[j+1]){ 
                swap(arr[j],arr[j+1]);
                    isSwappedOnce = true; // Set the flag to true if a swap occurs
                }
            }
            if(!isSwappedOnce) { // If no swaps occurred, the array is already sorted
                break; // Break out of the loop
            }
        }
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 20, 22, 31};
    cout << "Original array: ";
    for (int i : arr) {     
        cout << i << " ";
    }
    cout << endl;
    sol.bubbleSort(arr); // Call the bubble sort function
    cout << "Sorted array: ";
    for (int i : arr) { 
        cout << i << " "; // Print each element in the sorted array
    }       
    cout << endl;
    return 0;
}