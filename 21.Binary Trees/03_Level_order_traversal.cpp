#include <iostream>
#include<queue>
using namespace std;

class Node{
  public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
	  this->data = val;
	  this->left = NULL;
	  this->right = NULL;
	}


};

//it returns root node of the created tree
Node* createTree() {
  cout << "enter the value for Node: " << endl;
  int data;
  cin >> data;

  if(data == -1) {
	return NULL;
  }
  //Step1: create Node
  Node* root = new Node(data);
  //Step2: Create left subtree
  cout << "left of Node: " << root->data << endl;
  root->left = createTree();
  //Step3: Craete right subtree
  cout << "right of Node: " << root->data << endl;
  root->right = createTree();
  return root;

}

void preOrderTraversal(Node* root) {
	//base case
	if(root == NULL) {
		return;
	}
	// N L R
	//N 
	cout << root->data << " ";
	// L
	preOrderTraversal(root->left);
	// R
	preOrderTraversal(root->right);
}

void inorderTraversal(Node* root) {
	//LNR
	//base case
	if(root == NULL) {
		return;
	}
	//L
	inorderTraversal(root->left);
	// N
	cout << root->data << " ";
	// R
	inorderTraversal(root->right);
}

void postOrderTraversal(Node* root) {
	//LRN
	//base case
	if(root == NULL) {
		return;
	}
	//L
	postOrderTraversal(root->left);
	//R
	postOrderTraversal(root->right);
	//N
	cout << root->data << " ";
}
  
void levelOrderTraversal(Node* root) {
	queue<Node*> q;
	q.push(root);
	q.push(NULL); // level complete ho gayeeee

	//asli traversal start krete h 

	while(!q.empty()) {
		Node* front = q.front();
		q.pop();

		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {  // imp case for last null so vvvvvvvimpimpimp
				q.push(NULL);
			}
		}
		else {
			//valid node wala case
			cout << front->data << " ";
			if(front->left != NULL) {
				q.push(front->left);
			}
			if(front->right != NULL) {
				q.push(front->right);
			}
		}
	}
}
int main() {

	  Node* root = createTree();
	  //cout << root->data << endl;
	  cout << "Printing Preorder: ";
	  preOrderTraversal(root);
	  cout << endl;

	  cout << "Printing Inorder: ";
	  inorderTraversal(root);
	  cout << endl;

	  cout << "Printing PostOrder: ";
	  postOrderTraversal(root);
	  cout << endl;               

	  cout << "Level Order : \n";
	  levelOrderTraversal(root);
	  cout << endl;

  return 0;
}