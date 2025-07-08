#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Question : Linear Search
// Link : https://www.geeksforgeeks.org/searching-for-a-key-in-a-list-using-linear-search/
// Approach :
//           1. Traverse the array from start to end
//           2. Compare each element with the key
//           3. If the element is equal to the key, return true
//           4. If the element is not equal to the key, continue to the next element
//           5. If the end of the array is reached and the key is not found, return false
// Time Complexity : O(n)
// Space Complexity : O(1)
// Dry Run ::
// 1 2 3 4 5

bool linearSearch(int *arr,int n,int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key){
            return true;
        }  
    }
    return false;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter no of Elements :"<<endl;
    cin>>n;
      for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Key :"<<endl;
    cin>>key;
    if(linearSearch(arr,n,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}