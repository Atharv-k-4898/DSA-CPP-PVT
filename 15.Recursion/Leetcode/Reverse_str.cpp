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

//Question :reverse the string
//Link :https://leetcode.com/problems/reverse-string/
//Approach :
//Time Complexity :  O(n)
//Space Complexity : O(n)
void stringReverse(string& s,int i,int j){
    if(i>=j) return;
    swap(s[i],s[j]);
    stringReverse(s,i+1,j-1);
}
int main()
{
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    stringReverse(s,i,j);
    cout<<s;
    return 0;
}