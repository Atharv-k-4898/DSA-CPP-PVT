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
// LCM -- Least common multiple
///       LCM mhanje tya don nos chya table madhla smallest no jo doghat ahe
//Question :
//Link :
//Approach : 
            // LCM*HCF=a*b
            //LCM(a,b)*GCD(a,b)=a*b

            // LCM = a*b / GCD

//Time Complexity :O(n)
//Space Complexity :
//Dry Run ::


class Solution {
  public:
    int gcd(int a, int b) {
        if(a==0) return b;
        if(b==0) return a;
        while(a>0 && b>0){
            if(a>b){
                a-=b;
            }
            else{
                b-=a;
            }
        }
        return a==0 ? b:a;
    }
    int lcm(int a,int b){
        return (a * b)/gcd(a,b);
    }
};

int main()
{
    Solution soln;
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
}