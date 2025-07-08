#include <iostream>
#include <queue>
using namespace std;

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

// it returns root node of the created tree
Node *createTree()
{
    cout << "Enter the value for Node: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    // Step1: create Node
    Node *root = new Node(data);
    // Step2: Create left subtree
    cout << "left of Node: " << root->data << endl;
    root->left = createTree();
    // Step3: Craete right subtree
    cout << "right of Node: " << root->data << endl;
    root->right = createTree();
    return root;
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
int main()
{

    Node *root = createTree();
    cout << "Root Node is : " << root->data << endl;
    cout << "Printitng preorder >>"<<endl;
    preOrderTraversal(root);
    cout << "\nPrintitng inorder >>" << endl;
    inOrderTraversal(root);
    cout << "\nPrintitng postorder >>" << endl;
    postOrderTraversal(root);
    return 0;
}