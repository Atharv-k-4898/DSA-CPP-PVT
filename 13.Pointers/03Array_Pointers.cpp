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


// Dereference matlab value at reference
int main()
{
    int arr[4]={12,14,16,18};
    cout<<*arr<<endl;       /// Value at base address at index 0
    cout<<*arr + 1<<endl;   //Value at base address + 1
    cout<<*(arr + 3)<<endl;   //Value at base address + 1
    cout<<arr<<endl;       /// Base address
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;      /// Base address
    cout<<&arr[0]<<endl;   /// Base address


    // Always remember arr / &arr / arr[0] is same
    // arr[i] = *(arr+i)   also this is correct i[arr] == *(i+arr)
    int i=0;
    cout<<arr[i]<<endl;//same
    cout<<i[arr]<<endl;//same
    cout<<*(arr+i)<<endl;//same
    cout<<*(i+arr)<<endl;//same


    int *ptr = arr;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    // With the help of pointer we can manupulate array
    cout<<*(ptr+2)<<endl;

    ///////// """"""""""""""""""""""""""""""" Why we cant do arr=arr+1 becoz arr is a constant pointer"""""""""""""""""""""""""""
    return 0;
}

// | Feature           | Array                                            | Pointer                         |
// | ----------------- | -------------------------------------------------| --------------------------------|
// | Size ?            | Returns size of array                            | 8 bytes size fixed              |
// | Change            | We cant change const value(arr is const pointer) | We can change any value         |