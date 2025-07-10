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
#define ak long long
#define pb push_back
#define vi vector<int>
#define vl vector<ak>
#define pii pair<int, int>
#define pll pair<ak, ak>
#define vpi vector<pii>
#define vpl vector<pll>
#define mii map<int, int>
#define mll map<ak, ak>
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)((x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repd(i, a, b) for (int i = (a); i >= (b); --i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

/*
✦ Question         :
✦ Question Link    :
✦ Approach         :
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
*/

class Student
{ // "<" overload
public:
    string name;
    int marks;
    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }

    // fun making default max heap comparator based on marks grater to smaller
    bool operator<(const Student &obj) const
    {
        return this->name < obj.name;
    }

    // Can do for both name and marks
    // In default heap max is there in cpp if both are < and <
};

int main()
{
    //  priority_queue<Student>pq; this will give error as we havent gave what to prioritise
    // So we use operator overloading in class

    priority_queue<Student> pq;
    pq.push(Student("aman", 50));
    pq.push(Student("ath", 60));
    pq.push(Student("chetak", 80));
    pq.push(Student("ram", 99));

    while (!pq.empty())
    {
        cout << "Top = " << pq.top().name << "," << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}