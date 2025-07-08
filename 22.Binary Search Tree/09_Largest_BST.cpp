// #include <iostream>
// #include <vector>
// #include <stack>
// #include <queue>
// #include <deque>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <algorithm>
// #include <cmath>
// #include <numeric>
// #include <limits.h>
// #include <string>
// using namespace std;
// #define ak long long
// #define pb push_back
// #define vi vector<int>
// #define vl vector<ak>
// #define pii pair<int, int>
// #define pll pair<ak, ak>
// #define vpi vector<pii>
// #define vpl vector<pll>
// #define mii map<int, int>
// #define mll map<ak, ak>
// #define ff first
// #define ss second
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define sz(x) (int)((x).size())
// #define rep(i, a, b) for (int i = (a); i < (b); ++i)
// #define repd(i, a, b) for (int i = (a); i >= (b); --i)
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define endl '\n'
// #define FASTIO                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)

// /*
// ✦ Question         :
// ✦ Question Link    :
// ✦ Approach         :
// ✦ Time Complexity  : Avg case TC is O(H)== O(logn)
// ✦ Space Complexity :
// ✦ Dry Run          :
// */

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// class NodeData{
//     public:
//     int size;
//     int minVal;
//     int maxVal;
//     bool isValidBST;
//     NodeData(int size,int max,int min,bool valid){
//         this->size=size;
//         minVal=min;
//         maxVal=max;
//         isValidBST=valid;
//     }
// };
// Node *insertIntoBST(Node *root, int data)
// {
//     if (root == NULL)
//     {
//         // this is the first node
//         return new Node(data);
//     }
//     // not first node
//     if (root->data > data)
//     {
//         // push data at left
//         root->left = insertIntoBST(root->left, data);
//     }
//     else/// duplicates are also included
//     {
//         // push at right
//         root->right = insertIntoBST(root->right, data);
//     }
//     return root;
// }
// void takeInput(Node *&root)
// {
//     int data;
//     cin >> data;
//     while (data != -1)
//     {
//         root = insertIntoBST(root, data);
//         cin >> data;
//     }
// }
// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL); // level complete ho gayeeee

//     // asli traversal start krete h

//     while (!q.empty())
//     {
//         Node *front = q.front();
//         q.pop();

//         if (front == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             { // imp case for last null so vvvvvvvimpimpimp
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             // valid node wala case
//             cout << front->data << " ";
//             if (front->left != NULL)
//             {
//                 q.push(front->left);
//             }
//             if (front->right != NULL)
//             {
//                 q.push(front->right);
//             }
//         }
//     }
// }

// NodeData findLargestBST(Node *root,int ans){
//     // base case
//     if(root==NULL){
//         NodeData tmp(0,INT_MIN,INT_MAX,true);
//         return tmp;
//     }
//     NodeData leftKaAns=findLargestBST(root->left,ans);
//     NodeData rightKaAns=findLargestBST(root->right,ans);

//     // checking vala kam
//     NodeData currNodeKaAns;

//     currNodeKaAns=leftKaAns.size+rightKaAns.size+1;
//     currNodeKaAns.maxVal=max(root->data,rightKaAns.maxVal);
//     currNodeKaAns.minVal=min(root->data,leftKaAns.minVal);

//     // valid bst
//     if(leftKaAns.isValidBST && rightKaAns.isValidBST && ((root->data > leftKaAns.maxVal) && (root->data <rightKaAns.minVal))){
//         currNodeKaAns.isValidBST=true;
//     }
//     else{
//         currNodeKaAns.isValidBST=false;
//     }


//     // if valid bat then
//     if(currNodeKaAns.isValidBST) ans=max(ans,currNodeKaAns.size);

//     return currNodeKaAns;
//  }
// int main()
// {
//     // FASTIO;
//     Node *root = new Node(5);
//     Node *first= new Node(2);
//     Node *sec= new Node(4);
//     Node *third= new Node(1);
//     Node *fourth= new Node(3);
  
//     root->left=first;
//     root->right=sec;
//     root->left=third;
//     root->right=fourth;
//     // cout << "Enter the data for Node :";
//     // takeInput(root);
//     cout << "Printing the tree Level Order" << endl;
//     levelOrderTraversal(root);
//     cout<<endl;

//     int ans=0;
//     findLargestBST(root,ans);
//     cout<<"Largest BST ka size"<<ans<<endl;
//     // cout<<"Printing Tree Preorder"<<endl;
//     // preOrderTraversal(root);
//     // cout<<endl;
//     // cout<<"Printing Tree Inorder"<<endl;
//     // inOrderTraversal(root);
//     // cout<<endl;
//     // cout<<"Printing Tree Postorder"<<endl;
//     // postOrderTraversal(root);
    
// ///////////// Inorder of BST is always sorted
//     return 0;
// }
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

// Node structure for BST
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// NodeData to return info from recursive calls
class NodeData {
public:
    int size;
    int minVal;
    int maxVal;
    bool isValidBST;

    NodeData(int size, int maxVal, int minVal, bool isValidBST) {
        this->size = size;
        this->minVal = minVal;
        this->maxVal = maxVal;
        this->isValidBST = isValidBST;
    }
};

// Level order traversal for display
void levelOrderTraversal(Node *root) {
    if (!root) return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // Level delimiter

    while (!q.empty()) {
        Node *front = q.front();
        q.pop();

        if (front == NULL) {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        } else {
            cout << front->data << " ";
            if (front->left != NULL) q.push(front->left);
            if (front->right != NULL) q.push(front->right);
        }
    }
}

// ✅ Corrected version — pass ans by reference, use proper return
NodeData findLargestBST(Node *root, int &ans) {
    if (root == NULL)
        return NodeData(0, INT_MIN, INT_MAX, true);

    NodeData left = findLargestBST(root->left, ans);
    NodeData right = findLargestBST(root->right, ans);

    // If current subtree is BST
    if (left.isValidBST && right.isValidBST &&
        root->data > left.maxVal && root->data < right.minVal) {
        
        int currSize = left.size + right.size + 1;
        ans = max(ans, currSize);

        return NodeData(currSize,
                        max(root->data, right.maxVal),
                        min(root->data, left.minVal),
                        true);
    }

    return NodeData(0, 0, 0, false); // Not a BST
}

// int main() {
//     Node *root = new Node(5);
//     Node *first = new Node(2);
//     Node *second = new Node(4);
//     Node *third = new Node(1);
//     Node *fourth = new Node(3);

//     root->left = first;
//     root->right = second;
//     first->left = third;
//     first->right = fourth;

//     cout << "Printing the tree Level Order:" << endl;
//     levelOrderTraversal(root);
//     cout << endl;

//     int ans = 0;
//     findLargestBST(root, ans);

//     cout << "Largest BST ka size: " << ans << endl;

//     return 0;
// }
int main()
{
    // Constructing the complex tree
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(60);
    root->left->left = new Node(5);
    root->left->right = new Node(20);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    cout << "Printing the tree Level Order:" << endl;
    levelOrderTraversal(root);
    cout << endl;

    int ans = 0;
    findLargestBST(root, ans);
    cout << "Largest BST ka size: " << ans << endl;

    return 0;
}
