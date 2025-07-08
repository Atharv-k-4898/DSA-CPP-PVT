#include <iostream>
#include <queue>
#include <map>
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

Node *createTree()
{
    cout << "Enter the value for Node : ";
    int value;
    cin >> value;

    if (value == -1)
    {
        return NULL;
    }

    // create Node;
    Node *root = new Node(value);
    cout << "Entering in left of: " << value << endl;
    root->left = createTree();
    cout << "Entering in right of: " << value << endl;
    root->right = createTree();
    return root;
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    cout << endl;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void printBottumView(Node *root)
{
    map<int, int> horizontalDistanceToNodemap;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> tmp = q.front();
        q.pop();

        Node *frontNode = tmp.first;
        int horizontalDistance = tmp.second;

        // if there is no entry in map then create new entry
        // if (horizontalDistanceToNodemap.find(horizontalDistance) == horizontalDistanceToNodemap.end())
        // {

        ///////////// Only update kato overwrite karne se last bottum value print ho gaye
            horizontalDistanceToNodemap[horizontalDistance] = frontNode->data;
        // }

        // child ko dekhna
        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, horizontalDistance - 1));
        }
        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, horizontalDistance + 1));
        }
    }

    cout << "Printing Bottum view" << endl;
    for (auto i : horizontalDistanceToNodemap)
    {
        cout << i.second << "  ";
        cout<<endl;
    }
}

int main()
{
    Node *root = createTree();
    levelOrderTraversal(root);
    printBottumView(root);
    return 0;
}

// 10 15 25 -1 45 65 -1 -1 96 -1 -1 - 1 11 16 -1 -1 -1
