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
class stack
{
public:
    int top;
    int *arr;
    int size;
    stack(int size)
    {
        arr = new int[size]; // use will tell the size from that we will create dynamic array
        this->size = size;
        top = -1;
    }
    // functions
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else cout << "Stack OverfLow" << endl;
    }
    void pop()
    {
        if (top == -1) cout << "Stack Underflow" << endl;
        else  top--;
    }
    int getTop()
    {
        if (top == -1) cout << "There is no element" << endl;
        else return arr[top];
    }
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    stack st(10); // 10 is size 
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);


    st.pop();
    st.pop();

    cout << "Top element: " << st.getTop() << endl;        

    cout << "Size of stack: " << st.getSize() << endl;
    
    if (st.isEmpty()) cout<< "Stack is empty" << endl;
    else cout << "Stack is not empty" << endl;

    cout << "Elements in stack: ";
    while (!st.isEmpty())
    {
        cout << st.getTop() << " ";
        st.pop();
    }
    cout << endl;
    if (st.isEmpty()) cout << "Stack is empty after popping all elements" << endl;
    else cout << "Stack is not empty after popping all elements" << endl;

    return 0;
}