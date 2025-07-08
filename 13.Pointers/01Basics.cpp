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
// Pointer in c++ is a variable that stores address of another variable..
// We cant store name pointing value for each variable so ve give address to the variable

// When we create a variable Symbol Table gives value to x and a block is created with address of x

int main()
{
    int a = 50;
    cout << "Value of variable a: " << a << endl;    // Value of a.
    cout << "Address of variable a: " << &a << endl; // Address of value

    // Same values of values dont mean same address.
    int *ptr = &a; // Ptr is  a data type which can store only address

    // """""" ptr navacha ek dabba tayar zala 108 navacha ani tya madhe
    //            a cha address  104 ha store zala """""""

    cout << "Address of Ptr: " << ptr << endl;
    cout << "Value stored in ptr" << *ptr << endl; //*ptr is called dereference operator.
    *ptr = *ptr + 2;                               // we changed the value of variable stored in ptr
    cout << "Address of Ptr after addition: " << ptr << endl;
    cout << "Value stored in ptr after addition: " << *ptr << endl;
    cout << "Changed value of a after addition: " << a << endl;
    // """"""""""""""""""""""""""""""""""""""""
    // ""                                    ""
    // ""                                    ""
    // ""                                    ""
    // "" All have Same size 8 bytes always  ""
    // ""  Pointer to integer                ""
    // ""  Pointer to char                   ""
    // ""  Pointer to double                 ""            
    // """"""""""""""""""""""""""""""""""""""""          
    // Also depends on system but its same for all datatypes for 64 bytes 8 bits
    
    // Bad pratice
    // int *ptr1;
    // cout<< *ptr1<<endl;// [1]    72058 segmentation fault (core dumped)  ./output
    // This gives segmentation error means we are trying to access out memory of allocated 
    // Segmantation means apnivali(gharvali) ko use karo not bharvali
    
    
    // Good Pratice NULL Pointer initialision
    int *ptr1 = 0;
    cout<<*ptr1<<endl;
    
    return 0;
}