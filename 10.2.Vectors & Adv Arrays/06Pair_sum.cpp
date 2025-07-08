#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Example: arr = {4,5,3,6,2,1}  / 6
// Key is 9
// Dry Run:
// 4+5=9
// 4+3=7
// 4+6=10   
// 4+2=6
// 4+1=5
// 5+3=8
// 5+6=11
// 5+2=7
// 5+1=6
// 3+6=9
// 3+2=5
// 3+1=4
// 6+2=8
// 6+1=7
// 2+1=3
// 1+1=2

// Time Complexity: O(n^2)  Wrost Complexity
// Space Complexity: O(1) (No extra space used)
// Approach: Use two nested loops to find pairs that sum to the key.
int main()
{
    int n1,key=0;
    cout<< "Enter size of array: ";
    cin >> n1;
    cout<< "Enter key: ";
    cin >> key;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = i + 1; j < arr1.size(); j++)
        {
            if(arr1[i] + arr1[j] == key)
            {
                cout << "Pair found: ("<< arr1[i] << "," << arr1[j] <<")"<< endl;
                break; // Move to next element in arr1
            }
        }
        
    }
    
    return 0;
}