#include <iostream>
using namespace std;

class NODE {
public:
    int data;
    NODE *prev;
    NODE *next;

    // Corrected constructor names to match the class name 'NODE'
    NODE() {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    NODE(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to display the list
void display(NODE *&st) {
    NODE *a = st;
    if (st == NULL) {
        cout << "Empty List" << endl;
        return;
    }
    while (a) {
        cout << a->data <<"  ";
        a = a->next;
    }
}

// Function to count the nodes in the list
int countNodes(NODE *&st) {
    NODE *a = st;
    int cnt = 0;
    if (st == NULL) {
        cout << "0" << endl;
        return 0;
    }
    while (a) {
        cnt++;
        a = a->next;
    }
    return cnt;
}

int main() {
    // Creating nodes
    NODE *first = new NODE(10);
    NODE *second = new NODE(20);
    NODE *third = new NODE(30);

    // Linking nodes
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    // Displaying the list
    display(first);

    // Displaying node count
    cout<<endl;
    cout << "Node Count: " << countNodes(first) << endl;

    return 0;
}
