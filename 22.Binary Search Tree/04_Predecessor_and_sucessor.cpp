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

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    if (root->data > data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

// Method 1: Inorder Vector
void storeInorder(Node *root, vi &in)
{
    if (root == NULL)
        return;

    storeInorder(root->left, in);
    in.pb(root->data);
    storeInorder(root->right, in);
}

void findInorderPredSuccUsingVector(Node *root, int key)
{
    vi in;
    storeInorder(root, in);
    auto it = find(all(in), key);
    if (it == in.end())
    {
        cout << "Key not found" << endl;
        return;
    }
    int idx = it - in.begin();
    if (idx - 1 >= 0)
        cout << "Predecessor: " << in[idx - 1] << endl;
    else
        cout << "Predecessor: None" << endl;

    if (idx + 1 < in.size())
        cout << "Successor: " << in[idx + 1] << endl;
    else
        cout << "Successor: None" << endl;
}

// Method 2: Recursive
Node *find(Node *root, int key)
{
    if (root == NULL)
        return NULL;
    if (root->data == key)
        return root;
    else if (key < root->data)
        return find(root->left, key);
    else
        return find(root->right, key);
}

int minValInBST(Node *root)
{
    Node *tmp = root;
    while (tmp && tmp->left)
    {
        tmp = tmp->left;
    }
    return tmp ? tmp->data : -1;
}
int maxValInBST(Node *root)
{
    Node *tmp = root;
    while (tmp && tmp->right)
    {
        tmp = tmp->right;
    }
    return tmp ? tmp->data : -1;
}

void findPredSuccRecursive(Node *root, int key)
{
    Node *target = find(root, key);
    if (target == NULL)
    {
        cout << "Key not found" << endl;
        return;
    }

    // Successor = min in right subtree
    if (target->right)
        cout << "Successor: " << minValInBST(target->right) << endl;
    else
        cout << "Successor: None" << endl;

    // Predecessor = max in left subtree
    if (target->left)
        cout << "Predecessor: " << maxValInBST(target->left) << endl;
    else
        cout << "Predecessor: None" << endl;
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data for Node (-1 to stop): ";
    takeInput(root);

    cout << "\nLevel Order Traversal:\n";
    levelOrderTraversal(root);

    cout << "\n\nEnter the key to find Predecessor and Successor: ";
    int key;
    cin >> key;

    cout << "\n--- Method 1: Using Inorder Vector ---\n";
    findInorderPredSuccUsingVector(root, key);

    cout << "\n--- Method 2: Using Recursion ---\n";
    findPredSuccRecursive(root, key);

    return 0;
}
