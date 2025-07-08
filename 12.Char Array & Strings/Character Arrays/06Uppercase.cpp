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

//Question : Convert to upper case
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::

int toUppercase(char ch[]){
    int n= strlen(ch);
    for (int i = 0; i < n; i++)
    {
        if(ch[i]>=97 && ch[i]<=122){
            ch[i]-=32;
        }
    }
    cout<<ch;
    return 0;
}
int main()
{
    char ch[100];
    cin.getline(ch,50);
    toUppercase(ch);
    return 0;
}