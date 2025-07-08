#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string.h>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

// Question : Strings in cpp
int main()
{
    string str; // string is the collection of characters and id a datatype
    getline(cin, str);
    cout << str << endl;
    cout << str.length() << endl;
    cout << str.empty() << endl;
    str.push_back('@');
    str.push_back('#');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    /// IMP IMP IMP IMP
    cout << str.substr(0, 6) << endl; // st from 0 th index to 6 th index
    string st1;
    st1 = "abcdefghizkl";
    string st2;
    st2 = "abcdefghik";
    if (st1.compare(st2) == 0)
    {
        cout << "Both same";
    }
    else
    {
        cout << "Not same";
        if (st1.compare(st2) > 0)
        {
            cout << " And first letter of st1 is grater"<<endl;
        }
        else
        {
            cout << " And first letter of st2 is grater"<<endl;
        } // upto i same k > j so < 0
        // If first is same then check for next character....
    }
    string str3="hello ji kese ho sare";
    cout<<str3.find("ji")<<endl;//gives indexxx of st word.
    

    string a="This is my first message";
    string b="Babbar ";
    a.replace(0,4,b);// 0 is starting index 4 is the no of char to be repalced b is the string
    cout<<a<<endl;;

    a.erase(0,4);
    cout<<a<<endl;
    return 0;
}
// | Feature                  | `char[]` (C-style)       | `std::string` (C++ style)  |
// | ------------------------ | ------------------------ | -------------------------- |
// | Dynamic size             | ❌ (fixed)                | ✅ (resizable)              |
// | Null-terminated          | ✅                        | ❌ (not required)           |
// | Supports spaces          | ❌ (`cin` stops at space) | ✅ (`getline` works)        |
// | Built-in functions       | ❌                        | ✅ (`length()`, `find()`)   |
// | Memory safety            | ❌ (risk of overflow)     | ✅                          |
// | Part of Standard Library | ❌ (from C)               | ✅ (C++ `#include<string>`) |
// | Performance              | ✅ (low-level control)    | ⚠️ Slightly heavier        |
