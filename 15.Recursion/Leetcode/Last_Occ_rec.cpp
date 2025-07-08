#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include<cstring>
#include <map>
#include <set>
#include <limits.h>
using namespace std;
// //Approach :1) Search for the key Left to right store all idx and print last
//             2) Seatch from Right to Left store 1 st idx
//             3) STL strrchr()  function that finds last occ

//Time Complexity :O(N)
//Space Complexity :O(N)
//Dry Run ::

class Solution{
public:
    int meth1ltor(string& s,char key,int i,int& ans){
        if(i>=s.size()) return ans;
        if(s[i]==key) ans=i;
        return meth1ltor(s,key,i+1,ans);
    }
    int meth2rtol(string& s,char key,int last,int& ans){
        if(last<=0) return 0;
        if(s[last]==key) return ans;
        return meth1ltor(s,key,last-1,ans);
    }
    void meth3(string&s){
        char *ch=strrchr(s,'d');
        cout<<ch+1;
    }
};
int main()
{
    Solution soln;
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans =-1;
    int i=0;
    int last=s.size()-1;
    // cout<<soln.meth1ltor(s,x,i,ans)<<endl;
    //cout<<soln.meth2rtol(s,x,last,ans);
    soln.meth3(s);
    return 0;
}

// // C++ program to demonstrate working strchr()
// #include <cstring>
// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[] = "This is a string";
//     char* ch = strrchr(str, 'i');
//     cout << "Index of last occurrence of i: "
//          << ch - str + 1;
//     return 0;
// }
// Output
// Index of last occurrence of i: 14
// Time Complexity: O(n),

// Space Complexity: O(1),

// where n is the length of the string.