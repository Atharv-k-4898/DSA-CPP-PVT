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

// Question :
// Link :
// Approach :

// Time Complexity :
// Space Complexity :
// Dry Run ::

// Array is a data structure ans int char is data type
// char ch[10]= creates block for char data and allocated 10 byte space
int main()
{
    char ch[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for (int i = 0; i < 10; i++)
    {
        cout << ch[i] << "  ";
    }

    // In c++ we can directly give string and also take in single single element
    char name[100];
    cin >> name;
    cout << endl
         << "Your name is : " << name << endl;
    // And about null char '\0' is directly inserted at last..
    cout << "Value of null char is : " << (int)'\0' << endl;
    // For ch[10] and ch[1000] space complexity is same

    // char name1[100];
    // cin >> name1;
    // cout << endl
    //      << "Your name is : " << name1 << endl;//only atharv prints
    // // cin keyword reads till only space char Atharv Kulkarni cin reads only atharv not kulkarni
    cin.ignore();// to fluch previous '\0'
    string arr;
    getline(cin,arr);
    // or for char arr[100]; 
    //        cin.getline(arr,50,3) 3 is the index which stops
    cout<<"Name : "<<arr;
    return 0;
}