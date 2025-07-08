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


// GCD is gratest common divisor   - A factor which is divisible completely to both the nos.
// HCF is highest common factor    - Same as gcd
/// GCD mhanje smallest no that can dic=vide both the numbers
//Question :
//Link : https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
//Approach : 1) Euclides Algorithm 
                // Theorem to find GCD 
                // gcd(a,b)=gcd(b-a,b)  for b>a
                // gcd(a,b)=gcd(a-b,a)  for a>b
//Time Complexity :O(n)
//Space Complexity :
//Dry Run ::
//eg gcd(72,24)=gcd(72-24,24)=gcd(48,24)=gcd(24,24)=gcd(0,24) so here 24 is gcd do till anyone becomes 0


class Solution {
  public:
    int gcd(int a, int b) {
        // code here
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
};


int main()
{
    Solution soln;
    int a,b;
    cin>>a>>b;
    cout<<soln.gcd(a,b)<<endl;
    return 0;
}