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
#define ak             long long
#define pb             push_back
#define vi             vector<int>
#define vl             vector<ak>
#define pii            pair<int,int>
#define pll            pair<ak,ak>
#define vpi            vector<pii>
#define vpl            vector<pll>
#define mii            map<int,int>
#define mll            map<ak,ak>
#define ff             first
#define ss             second
#define all(x)         (x).begin(), (x).end()
#define rall(x)        (x).rbegin(), (x).rend()
#define sz(x)          (int)((x).size())
#define rep(i,a,b)     for(int i=(a);i<(b);++i)
#define repd(i,a,b)    for(int i=(a);i>=(b);--i)
#define yes            cout<<"YES\n"
#define no             cout<<"NO\n"
#define endl           '\n'
#define FASTIO         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


/* 
✦ Question         : 
✦ Question Link    : 
✦ Approach         : 
✦ Time Complexity  : 
✦ Space Complexity : 
✦ Dry Run          : 
*/

class DeQue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    DeQue(int size) {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    bool isFull() {
        return (front == (rear + 1) % size);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void pushRear(int data) {
        if (isFull()) {
            cout << "Queue is full, can't insert" << endl;
            return;
        } else if (isEmpty()) {
            front = rear = 0;
            arr[rear] = data;
        } else if(rear==size-1 && front!=0) {
            rear=0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    
    void pushFront(int data) {
        if (isFull()) {
            cout << "Queue is full, can't insert" << endl;
            return;
        } else if (front ==-1) {
            front = rear = 0;
            arr[front] = data;
        } else if(front == 0 && rear!=size-1) {
            front=size-1;
            arr[front] = data;
        }
        else{
            front--;
            arr[front]=data;
        }
    }

    void popFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else if (front == rear) {
            front = rear = -1;
        } else if(front==size-1) {
            front=0;
        }
        else{
            front++;
        }
    }

    void popRear() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) { 
            rear = size - 1;
        }
        else {
            rear--;
        }
    }

    int getSize() {
        if (isEmpty()) return 0;
        if (rear >= front) return rear - front + 1;
        return size - (front - rear - 1);
    }
};
int main()
{
    FASTIO;
    DeQue q(10); // create a deque with size 10

    // Insert elements at front and rear
    q.pushFront(10);   // [10]
    q.pushFront(20);   // [20, 10]
    q.pushRear(30);    // [20, 10, 30]
    q.pushRear(40);    // [20, 10, 30, 40]
    q.pushFront(50);   // [50, 20, 10, 30, 40]

    cout << "Size :" << q.getSize() << endl;  // Should print 5

    // Remove one from front and one from rear
    q.popFront();  // Removes 50
    q.popRear();   // Removes 40

    cout << "Size :" << q.getSize() << endl;  // Should print 3

    // Check if queue is empty
    if (q.isEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;
    return 0;
}
