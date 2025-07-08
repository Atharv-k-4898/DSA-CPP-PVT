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
✦ Time Complexity  : Avg case TC is O(H)== O(logn)
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
void preOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
        return;
    // N L R
    // N
    cout << root->data << " ";
    // L
    preOrderTraversal(root->left);
    // R
    preOrderTraversal(root->right);
}
void inOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
        return;
    // L N R
    // L
    inOrderTraversal(root->left);
    // N
    cout << root->data << " ";
    // R
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
        return;
    // L R N
    // L
    postOrderTraversal(root->left);
    // R
    postOrderTraversal(root->right);
    // N
    cout << root->data << " ";
}
Node *BSTUsingInorder(int inOrder[], int s, int e)
{
    // base case
    if (s > e)
        return NULL;
    int mid = (s + e) / 2;
    int element = inOrder[mid];
    Node *root = new Node(element);
    root->left = BSTUsingInorder(inOrder, s, mid - 1);
    root->right = BSTUsingInorder(inOrder, mid + 1, e);
    return root;
}
void convertIntoSortedDLL(Node *root, Node*&st)
{
// We bont use next and prev ve use them as left and right
    if (root == NULL)
        return;
    // right subtree ko llme convert
    convertIntoSortedDLL(root->right, st);
    // root node ko right vali se attatch karo
    root->right = st;
    if (st != NULL)
        st->left = root;

    // update head
    st = root;

    // left wala batcha
    convertIntoSortedDLL(root->left, st);
}
void printLL(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->right;
    }
    cout << endl;
}
int main()
{
    int inOrder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0, e = 8;
    Node *root = BSTUsingInorder(inOrder, s, e);
    levelOrderTraversal(root);

    Node *st = NULL;
    convertIntoSortedDLL(root, st);
    cout <<endl;
    printLL(st);

    return 0;
}