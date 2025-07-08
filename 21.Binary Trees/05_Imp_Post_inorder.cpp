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
✦ Question         : You have two arrays preorder and inorder you have to create a binary tree
✦ Question Link    :
✦ Approach         :
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
*/
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// This fun makes search in O(1)
void createMapping(int inorder[], int size, map<int, int> &valueToIndexMap)
{
    for (int i = 0; i < size; i++)
    {
        int element = inorder[i];
        int index = i;
        valueToIndexMap[element] = index;
    }
}
// int searchInOrder(int inorder[],int size,int target){
//     for (int i = 0; i < size; i++)
//     {
//         if(inorder[i] == target) return i;
//     }
//     return -1;
// }
////////////////////////////////////////////////very impmpmpmpmpmpmpmpmpmp
Node *constructTree(map<int, int> &valToIndexMap,
                    int postorder[], int inorder[], int &postIdx, int inorderStart, int inorderEnd, int size)
{
    // base case                                 ///imp address
    if (postIdx < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }
    // 1 case me solve karta hu baki recursion
    int element = postorder[postIdx];
    postIdx--;
    Node *root = new Node(element);
    // element search karna padega inorder me
    // int position = searchInOrder(inorder, size, element);
    int position = valToIndexMap[element];
    root->right = constructTree(valToIndexMap, postorder, inorder, postIdx, position + 1, inorderEnd, size);
    root->left = constructTree(valToIndexMap, postorder, inorder, postIdx, inorderStart, position - 1, size);

    return root;
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
int main()
{
    FASTIO;
    int inOrder[] = {8, 14, 16, 2, 10, 4};
    int postOrder[] = {8, 16, 14, 4, 10,2};

    int size = 6;
    int postIdx = size - 1; /// post
    int inorderStart = 0;
    int inorderEnd = size - 1;

    map<int, int> valToIndexMap;
    createMapping(inOrder, size, valToIndexMap);

    Node *root = constructTree(valToIndexMap, postOrder, inOrder, postIdx, inorderStart, inorderEnd, size);

    cout << "Printing ::\n\n";
    levelOrderTraversal(root);
    return 0;
}
