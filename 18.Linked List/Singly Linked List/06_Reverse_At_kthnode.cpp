#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;
    NODE(int data = 0)
    {
        this->data = data;
        this->next = NULL;
    }
};

void display(NODE *st)
{
    if(st==NULL) cout<<"Empty List"<<endl;
    while (st != NULL)
    {
        cout << st->data << "  ";
        st = st->next;
    }
    cout << endl;
}
void addAtEnd(NODE *&st, int data)
{
    if (st == NULL)
    {
        st = new NODE(data);
        cout<<"Empty List But Added "<<data<<" at end"<<endl;
        return;
    }
    NODE *a = st, *b=new NODE(data);
    while (a->next != NULL)
    {
        a = a->next;
    }
    a->next=b;
    b->next=NULL;
    cout<<"Added At end"<<endl;
    
}
int countNodes(NODE *&st){
    NODE *a=st;
    int count=0;
    while (a)
    {
        count++;
        a=a->next;
    }
    return count;
}
// Q is break in kth pos and reverse both arrays
// Ek case Baki recursion
// 1 2 3 hum 4 5 6 7 8 9 recursion
NODE *reverseKNodes(NODE *&st, int k) {
    if (st == NULL) {
        cout << "LL is empty" << endl;
        return NULL;
    }

    int leng = countNodes(st);
    if (k > leng) {
        cout << "Enter Valid value" << endl;
        return st;
    }

    NODE *a = st, *b = NULL, *c = NULL;
    int cnt = 0;

    // Reverse first k nodes
    while (a != NULL && cnt < k) {
        b = a;
        a = a->next;
        b->next = c;
        c = b;
        cnt++;
    }

    // After reversing, 'c' is the new head of the k-group
    // 'st' was the head before reversing, now it's the tail
    if (a != NULL) {
        st->next = reverseKNodes(a, k);  // 'st' is the tail after reversal
    }

    return c; // Return new head of this segment
}


int main()
{
    NODE *st = NULL;
    int opt, data, pos,k;
    while(1)
    {
        cout << "\n1. Add at End\n2. Display\n3. Reverse Element\n";
        cout << "Enter your choice: ";
        cin >> opt;
        if(opt>3) return 0;
        switch (opt)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            addAtEnd(st, data);
            break;
        case 2:
            cout << "Linked List: ";
            display(st);
            break;
        case 3:
            cout<<"Enter K elements to reverse"<<endl;
            cin>>k;
            st=reverseKNodes(st,k);
            break;
        }
    }
}
