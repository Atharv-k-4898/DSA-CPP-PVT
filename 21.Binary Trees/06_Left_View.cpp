#include <iostream>
#include<queue>
#include<map>
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

Node* createTree() {
  cout << "Enter the value for Node : " ;
  int value;
  cin >> value;

  if(value == -1) {
	return NULL;
  }

  //create Node;
  Node* root = new Node(value);
  cout << "Entering in left of: "<< value << endl;
  root->left = createTree() ;
  cout << "Entering in right of: "<< value << endl;
  root->right = createTree();
  return root;
}

void preOrder(Node* root) {
  if(root == NULL) 
	return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right); 
}

void inOrder(Node* root) {
  if(root == NULL) 
	return;   
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right); 
}

void postOrder(Node* root) {
  if(root == NULL) 
	return;
	postOrder(root->left);
	postOrder(root->right); 
	cout << root->data << " ";
}

void levelOrderTraversal(Node* root) {
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  cout << endl;
  while(!q.empty()) {
	Node* temp = q.front();
	q.pop();

	if(temp == NULL) {
	  cout << endl;
	  if(!q.empty()) {
		q.push(NULL);
	  }
	}
	else {
	  cout << temp->data << " ";
	  if(temp->left != NULL) {
		q.push(temp->left);
	  }
	  if(temp->right != NULL) {
		q.push(temp->right);
	  }
	}


  }
}

void printLeftView(Node* root, int level, vector<int>& leftView) {
  if(root == NULL) 
	return;

  if(level == leftView.size()) {
	//iska matlab left view ki node milgyi h , store karlo
	leftView.push_back(root->data);
  }
  printLeftView(root->left, level+1, leftView);
  printLeftView(root->right, level+1, leftView);
}

int main() {
  Node* root = createTree();
  levelOrderTraversal(root);

  
  vector<int> leftView;
  printLeftView(root, 0, leftView);
  cout << "Printing Left View: " << endl;
  for(int i=0; i<leftView.size(); i++) {
	  cout << leftView[i] << " ";
  }
  return 0;
}

//10 15 25 -1 45 65 -1 -1 96 -1 -1 - 1 11 16 -1 -1 -1

// 10 
// 15 11 
// 25 16 
// 45 
// 65 96 
// Printing Left View: 
// 10 15 25 45 65 