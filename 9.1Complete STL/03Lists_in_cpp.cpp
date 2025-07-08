#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
#include <list>
using namespace std;


int main()
{
    list<int> myList = {1, 2, 3, 4, 5};
    cout << "Original list: ";
    for(auto i : myList){
        cout << i << " ";
    }
    cout << endl;
    // Adding elements
    myList.push_back(6); // Add to the end
    myList.push_front(0); // Add to the front
    cout << "After adding elements: ";
    for(auto i : myList){
        cout << i << " ";
    }
    cout << endl;
    // Removing elements
    myList.pop_back(); // Remove from the end
    myList.pop_front(); // Remove from the front
    cout << "After removing elements: ";
    for(auto i : myList){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}