#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string.h>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

//Question :
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::


int reverseString(char ch[]){
    int n= strlen(ch);
    for (int i = 0,j=n-1; i <= j; i++,j--)
    {
        swap(ch[i],ch[j]);
    }
    cout<<ch<<endl;
    return 0;
}
int main()
{
    char ch[100];
    cin>>ch;
    reverseString(ch);
    return 0;
}