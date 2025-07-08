#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Given in an array only 1 no is repeated so find it



/// 
///  Negative marking method 
// Dry
// 1,3,4,2,2  
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
    int ans = -1;
        for (int i = 0; i < arr.size(); i++) {
            int index = abs(arr[i]);
            if (arr[index]<0) {
                ans = index;
                break;
            }
            arr[index] *= -1;
        }
    cout<<ans<<endl;
    
    return 0;
}

// complexity is O(N^2)