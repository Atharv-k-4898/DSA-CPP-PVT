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

//Question :
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::



int main()
{
    vector<int>v{1,2,3,4,5,6,7,8,9,10};
    if (binary_search(v.begin(),v.end(),41))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
    
    return 0;
}