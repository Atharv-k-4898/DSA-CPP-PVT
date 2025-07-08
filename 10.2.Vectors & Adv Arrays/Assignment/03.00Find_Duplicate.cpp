#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Given in an array only 1 no is repeated so find it
///  Positioning method
int main()
{
    int n;
    cin >> n;
    int i=0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(auto val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    while (arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);/// Best approach ever...
    }
    
    cout<<arr[0]<<endl;
    
    return 0;
}

// complexity is O(N^2)