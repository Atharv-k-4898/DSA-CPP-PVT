#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <stack>
using namespace std;


int main()
{
    // creation of stack
    stack<int> st;
    // pushing elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    //removing elements
    st.pop();
    st.pop();

    // top element
    cout << "Top element: " << st.top() << endl;        

    // size of stack
    cout << "Size of stack: " << st.size() << endl;
    
    // checking if stack is empty
    if (st.empty()) cout<< "Stack is empty" << endl;
    else cout << "Stack is not empty" << endl;

    // displaying elements
    cout << "Elements in stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // checking if stack is empty after popping all elements
    if (st.empty()) cout << "Stack is empty after popping all elements" << endl;
    else cout << "Stack is not empty after popping all elements" << endl;

    // When we insert 10 20 30 40 50 60 ,but when we access they are displayed is 
    // 60 50 40 30 20 10 because stack is LIFO (Last In First Out) structure.
    return 0;
}