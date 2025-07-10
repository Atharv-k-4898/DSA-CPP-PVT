#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>
#include <string>
using namespace std;
#define ak             long long
#define pb             push_back
#define vi             vector<int>
#define vl             vector<ak>
#define pii            pair<int,int>
#define pll            pair<ak,ak>
#define vpi            vector<pii>
#define vpl            vector<pll>
#define mii            map<int,int>
#define mll            map<ak,ak>
#define ff             first
#define ss             second
#define all(x)         (x).begin(), (x).end()
#define rall(x)        (x).rbegin(), (x).rend()
#define sz(x)          (int)((x).size())
#define rep(i,a,b)     for(int i=(a);i<(b);++i)
#define repd(i,a,b)    for(int i=(a);i>=(b);--i)
#define yes            cout<<"YES\n"
#define no             cout<<"NO\n"
#define endl           '\n'
#define FASTIO         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


/* 
✦ Question         : 
✦ Question Link    : 
✦ Approach         : 
✦ Time Complexity  : 
✦ Space Complexity : 
✦ Dry Run          : 
*/

class Heap{
    public:
    int arr[101];
    int size;

    Heap(){
        size=0;
    }
    void insert(int value){
        // val insert katro end me;
        size=size+1;
        int idx=size;
        arr[idx]=value;

        //iss value ko sahi pos pe place karte he
        while (idx >1)
        {
            int parentIdx=idx/2;
            if(arr[idx] > arr[parentIdx]) {
            swap(arr[idx],arr[parentIdx]);
            idx=parentIdx;         /// update
            }
            else{
                break;
            }
        }
    }
};

int main()
{
    FASTIO;
    Heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=40;
    h.arr[5]=45;
    h.size=5;
    cout<<"Printing the heap" <<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
    h.insert(200);
    h.insert(80);
    h.insert(1);

    cout<<"Printing the heap" <<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
//              200
//            /     \
//         50         100
//       /   \       /    \
//     40     45   60      80
//    /
//   1
