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
// What is custome comparator ?
// Userbuilt comparator which compares the chars

bool cmpForString(char first,char second){
   // return first < second;        // this will print ascending order
    return first > second;        // if fir > sec return true (descending order)
}
bool cmpForVector(int first,int second){
   // return first > second;        // this will print descending order
    return first < second;        // if fir > sec return true (ascending order)
}

int main()
{
    string a= "babbar";
    sort(a.begin(),a.end());  // this sorts babbar lexicographically(alphabatically)
    cout<<a<<endl;   /// ans -:aabbbr
    sort(a.begin(),a.end(),cmpForString);  // this sorts babbar reverse of lexicographically(alphabatically)
    cout<<a<<endl;   /// ans -:rbbbaa


    // Its also used for vectors
    vector<int>arr{1,6,3,8,2,9};
    sort(arr.begin(),arr.end(),cmpForVector);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}