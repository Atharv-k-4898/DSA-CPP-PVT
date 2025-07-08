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

//Question :Uppercase the string
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::

int replaceString(char ch[]){
    int n= strlen(ch);
    for (int i = 0; i < n; i++)
    {
        if(ch[i]>=65 && ch[i]<=90){
            ch[i]+=32;
        }
    }
    cout<<ch;
    return 0;
}
int main()
{
    char ch[100];
    cin.getline(ch,50);
    replaceString(ch);
    return 0;
}