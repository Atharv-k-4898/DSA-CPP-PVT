#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Given in an array only 1 no is repeated so find it
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
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i]==arr[j])
            {
                cout<< "Duplicate found !! i.e :"<<arr[i]<<endl;
            }
        }
        
    }
    
    return 0;
}

// complexity is O(N^2)