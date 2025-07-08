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

int slowExponentiation(int a,int b){
    int ans=1;
    for (int i = 0; i < b; i++)
    {
        ans*=a;
    }
    return ans; //// time comp is O(b) very time taking
}
int fastExponentiation(int a,int b){
    int ans=1;
    while(b>0){
        if (b&1)
        {
            // odd
            ans*=a;
        }
        a*=a;
        b>>1;//b / 2 = b >> 1
    }
    return ans;
}

// Its theory is 5^4 is = (5^2*5^2)(5^2*5^2)=5.5.5.5.5 = 625
// | Iteration | `b` Value | `b` is Even/Odd | `ans` Before | `ans` After                      | `a` Before | `a` After                 |
// | --------- | --------- | --------------- | ------------ | -------------------------------- | ---------- | ------------------------- |
// | Init      | 13        | Odd             | 1            | 1 × 6 = **6**                    | 6          | 6                         |
// | 1         | 13 → 6    |                 |              |                                  | 6          | 6 × 6 = **36**            |
// | 2         | 6         | Even            | 6            | 6 (no change)                    | 36         | 36 × 36 = **1296**        |
// | 3         | 6 → 3     | Odd             | 6            | 6 × 1296 = **7776**              | 1296       | 1296 × 1296 = **1679616** |
// | 4         | 3 → 1     | Odd             | 7776         | 7776 × 1679616 =     13060694016 | 1679616    | — (b becomes 0)           |
// | 5         | 1 → 0     | —               | —            | Loop ends                        | —          | —                         |
int main()
{
    int a,b;
    cin>>a>>b;
    //cout<<slowExponentiation(a,b)<<endl;
    cout<<fastExponentiation(a,b)<<endl;
    return 0;
}