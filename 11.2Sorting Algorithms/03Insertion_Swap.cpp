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
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int i,j,n=arr.size();
        for(i=0;i<=n-1;i++){
            j=i;
            while(j>0 && arr[j-1]> arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {14,9,15,12,6,8,13};
    cout << "Original array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    sol.insertionSort(arr); // Call the insertion sort function
    cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " "; // Print each element in the sorted array             
    }
    cout << endl;
    return 0;
}