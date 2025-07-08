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

// Question : Find Prime no.s betn 110 to 130
// Link :#
// Approach : 
// 1) Hopeless approach use sieve of erathosanos for 0 to 130 and only consider prime from 20 to 93
// 2) Stieve Segmenetd theorem (high and low) is given
// here we will create sieve of 110 to 130 part
// And then mark all true
// then generate all prime using root(r)
// here r is 130 this will used to mark prime in segmented sieve
// here index 0 resembles to 110 1 to 112
// Low is 110 so first miltiple is 110/prime*prime=firsr_multiple
// if first_multiple<low then add prime to it.

// Time Complexity :
// Space Complexity :
// Dry Run ::

// Simple sieve to generate base primes up to sqrt(r)
vector<bool> sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

vector<bool> segSieve(int l, int r) {
    // get the prime array , i will use it to make seg sieve
    vector<bool> sieveArr = sieve(sqrt(r));
    vector<int> basePrime;
    for (int i = 0; i < sieveArr.size(); i++) {
        if (sieveArr[i]) {
            basePrime.push_back(i);  // FIXED: this line was incorrect
        }
    }

    vector<bool> segSieve(r - l + 1, true);
    
    if (l == 0) {
        segSieve[0] = false;
        if (r - l >= 1) segSieve[1] = false;
    } else if (l == 1) {
        segSieve[0] = false;
    }

    for (auto prime : basePrime) {
        int first_mul = (l / prime) * prime;
        if (first_mul < l) {
            first_mul += prime;
        }
        int j = max(prime * prime, first_mul);
        while (j <= r) {
            segSieve[j - l] = false;
            j += prime;  // FIXED: missing increment
        }
    }

    return segSieve;  // FIXED: missing return
}

int main() {
    int l = 110, r = 130;
    vector<bool> seg = segSieve(l, r);
    for (int i = 0; i < seg.size(); i++) {
        if (seg[i]) {
            cout << i + l << " ";
        }
    }
    return 0;
}




/// Solve gfg prime product 