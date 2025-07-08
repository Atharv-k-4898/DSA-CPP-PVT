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
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    vector<int>arr1(n1);
    vector<int>arr2(n2);
     for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }   
    unionOf2(arr1,arr2,n1,n2);
    return 0;
}