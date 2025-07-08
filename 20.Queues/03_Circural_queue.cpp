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
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

class circuralQueue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    circuralQueue(int size) {
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

    void push(int data) {
        if (isFull())
            cout << "Queue is full , cant insert" << endl;
        else if (isEmpty()) {
            front = rear = 0;
            arr[rear] = data;
        } else {
            rear = (rear + 1) % size;
            arr[rear] = data;
        }
    }

    void pop() {
        if (isEmpty())
            cout << "Queue is empty" << endl;
        else if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return arr[front];
        }
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return arr[rear];
        }
    }

    int getSize() {
        if (isEmpty()) return 0;
        if (rear >= front) return rear - front + 1;
        return size - (front - rear - 1);
    }
};

int main() {
    FASTIO;
    circuralQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);  // This one may or may not insert based on capacity

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
