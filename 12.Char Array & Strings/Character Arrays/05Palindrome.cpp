#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string.h>
#include<string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

//Question : Palindrime
//Link :
//Approach : 1) make reverse and check for main string but space comp is more
            //  2) My app direct use 2 pointer approach and return false if ch[i]!=ch[j]

//Time Complexity :O(n)
//Space Complexity :O(1)
//Dry Run ::

bool isPalindrome(char ch[]){
    int n= strlen(ch);
    for (int i = 0,j=n-1; i <= j; i++,j--)
    {
        if(ch[i]!=ch[j]){
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[100];
    cin.getline(ch,50);
    if(isPalindrome(ch)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}