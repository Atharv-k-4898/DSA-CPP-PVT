#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

//Question :Find length of a string
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::


int getLength(char ch[]){
    int length=0;
    int i=0;
    while(ch[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int main()
{
    char ch[100];
    cin>>ch;
    cout<<getLength(ch)<<endl;
    cout<<strlen(ch)<<endl;
    return 0;
}