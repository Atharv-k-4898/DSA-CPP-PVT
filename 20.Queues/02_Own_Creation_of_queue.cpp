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

class ownQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    ownQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = 0;
    }
    bool isFull()
    {
        return rear == size;
    }
    bool isEmpty()
    {
        return ((front == rear) ? 1 : 0);
    }
    void push(int data)
    {
        if (isFull())
            cout << "Queue is full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        if (isEmpty())
            cout << "Queue is empty" << endl;
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            { // Imp always st from 0
                front = 0;
                rear = 0;
            }
        }
    }
    int getFront()
    {
        if (isEmpty())
            cout << "Queue is empty" << endl;
        else
        {
            return arr[front];
        }
    }
    int getRear()    // rear is always at 0 fix fix fix
    {
        if (isEmpty())
            cout << "Queue is empty" << endl;
        else
        {
            return arr[rear];
        }
    }
    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    FASTIO;
    ownQueue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Size :" << q.getSize() << endl;

    q.pop();
    q.pop();

    cout << "Size :" << q.getSize() << endl;

    cout << "Front is :" << q.getFront() << endl;

    cout << "Rear is :" << q.getRear() << endl;

    if (q.isEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}