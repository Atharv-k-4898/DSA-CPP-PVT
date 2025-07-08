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

// Question :common elements in two sorted arrays
// Link : https://www.geeksforgeeks.org/problems/common-elements1132/1?

// Approach : 1 )check a[i]==b[j]==c[k] then push it in ans vector
//            2 )check a[i]<b[j] then i++
//            3 )check b[j]<c[k] then j++
//            4 )check c[k]<a[i] then k++
//            5 )use set to avoid duplicates
//            6 )use vector to store the ans
// Time Complexity : O(n+m+k) where n,m,k are the size of the three arrays
// Space Complexity : if all same so O(n)
// Dry Run ::
//  arr1 = [1, 5, 10, 20, 40, 80] ,
//  arr2 = [6, 7, 20, 80, 100] ,
//  arr3 = [3, 4, 15, 20, 30, 70, 80, 120]
1|5|10|20|40|80
6|7|20|80|100
3|4|15|20|30|70|80|120
// 1) i=0,j=0,k=0
// 2) arr1[i]=1,arr2[j]=6,arr3[k]=3
// 3) arr1[i]<arr2[j] then i++
// 4) arr1[i]=5,arr2[j]=6,arr3[k]=3
// 5) arr1[i]<arr2[j] then i++
// 6) arr1[i]=10,arr2[j]=6,arr3[k]=3
// 7) arr2[j]<arr3[k] then j++
// 8) arr1[i]=10,arr2[j]=7,arr3[k]=3
// 9) else so K++
// 10) arr1[i]=10,arr2[j]=7,arr3[k]=4
// 11) else so K++
// 12) arr1[i]=10,arr2[j]=7,arr3[k]=15
// 13) arr2[j]<arr[i] then j++
// 14) arr1[i]=10,arr2[j]=20,arr3[k]=15
// 15) arr1[i]<arr2[j] then i++
// 16) arr1[i]=20,arr2[j]=20,arr3[k]=15
// 17) else so K++
// 18) arr1[i]=20,arr2[j]=20,arr3[k]=20
// 19) arr1[i]=20,arr2[j]=20,arr3[k]=20         // one ans 
// 20) i++,j++,k++

// Similarly we can find the other common elements
// Function to find common elements in three arrays.
vector<int> commonElements(vector<int> & arr1, vector<int> & arr2,
                           vector<int> & arr3)
{
    vector<int> ans;
    set<int> st;
    int i = 0, j = 0, k = 0;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            st.insert(arr1[i]); // use set to avoid duplicates
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }

    for (auto i : st)
        ans.push_back(i);

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> result = commonElements(arr1, arr2, arr3);

    // Print the result
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}