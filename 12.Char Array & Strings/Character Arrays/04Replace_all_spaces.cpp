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

//Question :Replace all the spaces from the string with @ sign
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::

int replaceString(char ch[]){
    int n= strlen(ch);
    for (int i = 0; i < n; i++)
    {
        if(ch[i]==' '){
            ch[i]='@';
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