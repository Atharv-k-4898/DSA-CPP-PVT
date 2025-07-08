// Brute Force Method is only for solving basic fessible solution
//  For platforms Optimal solution is required

// Vector is a dynamis array having not fixed size

// Declaration vector<int>arr;
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    // vector<int>arr1(10,20,30,40); // A vector created of 10 20 30 40
    // vector<int>arr2(10,-2); // A vector created of 10 elements -2
    vector<int> arr1;
    int ans = (sizeof(arr1) / sizeof(int));
    cout << ans << endl;
    cout << arr1.size() << endl;     // Size function gives how many elements are present now in vector
    cout << arr1.capacity() << endl; // Capacity gives how many elements can be inserted

    /// When you expicitily gives size to vector size==capicity
    // vector<int> arr2(20);//this means all 0
    vector<int> arr2(10, -1);
    cout << "Size of arr2 is :" << arr2.size() << endl;         // Size function gives how many elements are present now in vector
    cout << "Capacity of arr2 is :" << arr2.capacity() << endl; //
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << "  ";
    }
    cout << endl;

    // Run time size  yes we can incease size at run time
    int n;
    cin >> n;
    vector<int> arr3(n);
    for (int i = 0; i < arr3.size(); i++)
    {
        cin >> arr3[i];
    }
    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << "  ";
    }
    cout << endl;

    // Vector operations...
    arr1.push_back(5);
    arr1.push_back(6);
    arr1.push_back(7); // Pushed element at last
    arr1.pop_back();   // Last is removed.
    arr1.emplace_back(10); // Emplace back is used to insert element at last
    arr1.emplace_back(20);
    arr1.emplace_back(30); 
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << "  ";
    }

    cout << endl
         << "Vector arr1 is empty ? --- " << arr1.empty() << endl;
    
    /// Whenever vector fills it creats next 2 times size..
    // 5 to 10 and 10 to 20 soooo on..
    
    

    // Method 2 Pairs in vector
    vector<pair<int, int>> v;
    v.push_back({1, 2});
    v.push_back({3, 4});
    v.push_back({5, 6});
    cout << "Vector of pairs:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Pair " << i + 1 << ": (" << v[i].first
                << ", " << v[i].second << ")" << endl;
    }
    v.emplace_back(7, 8); // Adding a new pair using emplace_back
    cout << "After emplace_back:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Pair " << i + 1 << ": (" << v[i].first
                << ", " << v[i].second << ")" << endl;
    }
    v.erase(v.begin() + 1); // Erasing the second pair
    cout << "After erase:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Pair " << i + 1 << ": (" << v[i].first
                << ", " << v[i].second << ")" << endl;
    }

    // Erase
    vector<int> arr4 = {1, 2, 3, 4, 5};
    cout << "Before erase: ";
    for (int i = 0; i < arr4.size(); i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;
    arr4.erase(arr4.begin() + 2); // Erase the element at index
    arr4.erase(arr4.begin()+1,arr4.end()); // Erase from index 1 to end
    cout << "After erase: ";
    for (int i = 0; i < arr4.size(); i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;

    // Insert
    vector<int> arr5(2,100);
    cout << "Before insert: ";
    for (int i = 0; i < arr5.size(); i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;
    arr5.insert(arr5.begin() , 300); // Insert 300 at the beginning
    arr5.insert(arr5.begin() + 1, 3,90); // Insert 3 times 90 at index 1
    cout << "After insert: ";
    for (int i = 0; i < arr5.size(); i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;

    // Copy
    vector<int> arr6 = arr5; // Copying arr5 to arr6
    cout << "Copied vector arr6: ";
    for (int i = 0; i < arr6.size(); i++)
    {
        cout << arr6[i] << " ";
    }
    cout << endl;
    vector<int>copy(2,50);
    arr5.insert(arr5.begin() + 2, copy.begin(), copy.end()); // Insert elements of copy into arr5 at index 2
    cout << "After inserting copy into arr5: ";
    for (int i = 0; i < arr5.size(); i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;   

    // Clear
    vector<int> arr7 = {1, 2, 3, 4, 5};
    cout << "Before clear: ";
    for (int i = 0; i < arr7.size(); i++)
    {
        cout << arr7[i] << " ";
    }
    cout << endl;
    arr7.clear(); // Clear the vector
    cout << "After clear: ";
    if (arr7.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else
    {
        for (int i = 0; i < arr7.size(); i++)
        {
            cout << arr7[i] << " ";
        }
        cout << endl;
    }

    //Swap
    vector<int> arr8 = {1, 2, 3};
    vector<int> arr9 = {4, 5, 6};
    cout << "Before swap:" << endl;
    cout << "arr8: ";
    for (int i = 0; i < arr8.size(); i++)
    {
        cout << arr8[i] << " ";
    }       
    return 0;
}