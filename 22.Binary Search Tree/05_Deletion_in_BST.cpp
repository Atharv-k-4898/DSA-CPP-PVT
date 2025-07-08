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
✦ Time Complexity  : Average is O(height)  == O(h) == O(logN)
✦ Space Complexity :
✦ Dry Run          :
*/

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
        // this is the first node
        return new Node(data);
    }
    // not first node
    if (root->data > data)
    {
        // push data at left
        root->left = insertIntoBST(root->left, data);
    }
    else /// duplicates are also included
    {
        // push at right
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
    q.push(NULL); // level complete ho gayeeee

    // asli traversal start krete h

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            { // imp case for last null so vvvvvvvimpimpimp
                q.push(NULL);
            }
        }
        else
        {
            // valid node wala case
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

int minValInBST(Node *root)
{
    Node *tmp = root;
    if (tmp == NULL)
        return 0;
    while (tmp->left != NULL)
    {
        tmp = tmp->left;
    }
    return tmp->data;
}
int maxValInBST(Node *root)
{
    Node *tmp = root;
    if (tmp == NULL)
        return 0;
    while (tmp->right != NULL)
    {
        tmp = tmp->right;
    }
    return tmp->data;
}
Node *findNodeInBST(Node *root, int key)
{
    // base case
    if (root == NULL)
        return NULL;
    if (root->data == key)
        return root;
    if (root->data > key)
    {
        // left me jao
        return findNodeInBST(root->left, key);
    }
    else
    {
        // right me jao
        return findNodeInBST(root->right, key);
    }
}
// Node *deleteNodeInBST(Node *root, int key)
// {
//     // base case
//     if (root == NULL)
//         return root;

//     // St 1 Find node in bst
//     Node *tmp = findNodeInBST(root, key);

//     // St 2 Delete
//     // Case 1
//     if (tmp->left == NULL && tmp->right == NULL)
//     {
//         // its leaf node fix
//         delete tmp;
//         return NULL;
//     }
//     // Case 2
//     else if (tmp->left == NULL && tmp->right != NULL)
//     {
//         Node *child = tmp->right;
//         delete tmp;
//         return child;
//     }
//     // Case 3
//     else if (tmp->left != NULL && tmp->right == NULL)
//     {
//         Node *child = tmp->left;
//         delete tmp;
//         return child;
//     }
//     // Case 4
//     else
//     {
//         // Both nodes are present we can use any one predecessor and sucessor
//         int inOrderPredecessor = maxValInBST(tmp->left);
//         tmp->data = inOrderPredecessor;
//         tmp->left = deleteNodeInBST(tmp->left, inOrderPredecessor);
//         return root;
//     }
// }
/////////////// Above gives wring ans for 100 first node as it finds the max in laft and directly returns the null to the top node

/// // new
Node *deleteNodeInBST(Node *root, int key)
{
    // base
    if (root == NULL)
        return NULL;
    if (root->data == key)
    {
        // isi node ko delete karna he
        // 4 cases
        // Case 1
        if (root->left == NULL && root->right == NULL)
        {
            // its leaf node fix
            delete root;
            return NULL;
        }
        // Case 2
        else if (root->left == NULL && root->right != NULL)
        {
            Node *child = root->right;
            delete root;
            return child;
        }
        // Case 3
        else if (root->left != NULL && root->right == NULL)
        {
            Node *child = root->left;
            delete root;
            return child;
        }
        // Case 4
        else
        {
            // Both nodes are present we can use any one predecessor and sucessor
            int inOrderPredecessor = maxValInBST(root->left);
            root->data = inOrderPredecessor;
            root->left = deleteNodeInBST(root->left, inOrderPredecessor);
            return root;
        }
    }
    else if (key > root->data)
        root->right = deleteNodeInBST(root->right, key);
    else if (key < root->data)
        root->left = deleteNodeInBST(root->left, key);
    return root;
}
int main()
{
    // FASTIO;
    Node *root = NULL;
    cout << "Enter the data for Node :";
    takeInput(root);
    cout << "Printing the tree Level Order" << endl;
    levelOrderTraversal(root);
    cout << endl;
    /// Delete
    deleteNodeInBST(root, 100);

    cout << "After Deleting :" << endl;
    levelOrderTraversal(root);
    return 0;
}

// 100 50 150 40 60 110 175 -1