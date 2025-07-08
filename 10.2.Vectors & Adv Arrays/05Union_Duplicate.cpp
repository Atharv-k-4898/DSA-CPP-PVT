#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void unionOf2(vector<int>arr1,vector<int>arr2,int n1,int n2){
    vector<int>ans;
    for (int i = 0; i < n1; i++)
    {
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        ans.push_back(arr2[i]);
    }
    sort(ans.begin(),ans.end());// Sorting the array
    // After sorting we need to remove duplicates
    for (int i = 0; i < ans.size(); i++)
    {
        if(i > 0 && ans[i] == ans[i - 1]) // Check if current element is same as previous
        {
            continue; // Skip the duplicate element
        }
        // If not duplicate, print the element
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n1;
    cout<<"Array 1 size: ";
    cin>>n1;
    cout<<"Array 2 size: ";
    int n2;
    cin>>n2;
    vector<int>arr1(n1);
    vector<int>arr2(n2);
    cout<<"Enter elements of Array 1: ";
     for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter elements of Array 2: ";
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }   
    unionOf2(arr1,arr2,n1,n2);
    return 0;
}