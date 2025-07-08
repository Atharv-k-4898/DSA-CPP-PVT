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

//Question : Count primes till n
//Link : https://leetcode.com/problems/count-primes/
//Approach :

//Time Complexity :Best O(n*log(log(n)))
//Space Complexity :
//Dry Run ::


class Solution {
public:
    //App 1) Naive Approach
  
    // bool isPrime(int n){
    //     if(n<=1) return false;
    //     for(int i=2;i<n;i++){
    //         if(n%i==0) return false;
    //     }
    //     return true;//                   /// time limit exceed O(n^2) is the time complexity
    // }

    //App 2) Sqrt

    // bool isPrime(int n){
    //     if(n<=1) return false;
    //     for(int i=2;i<=sqrt(n);i++){  // atleast one of the factor must be < than root(n)
    //         if(n%i==0) return false;
    //     }
    // //     return true;//                     /// time limit exceed O(root(n))                
    // // }

    // //App 3) Stive of ERATOSTHENES
    //           a) mark all prime first from 2 to n-1
    //           b) prime no ke multiples prime nahi ho sakthe so mark table of 2 non prime
    //           c) do it for all non prime tables
    int countPrimes(int n) {
        if(n==0) return 0;

        vector<bool>prime(n,true);// this array is called sieve
        prime[0]=prime[1]=false;

        int ans=0;
        for(int i=2; i<n;i++){ /////  O(n*log(log(n))) tailors series hp formed so
            if(prime[i]){
                ans++;
                int j=2*i;
                while(j<n){
                    prime[j]=false;;
                    j+=i;
                }
            }
        }   
        return ans;
    }
};
int main()
{
    Solution soln;
    int n;
    cin>>n;
    cout<<soln.countPrimes(n)<<endl;
    return 0;
}