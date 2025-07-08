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

void addAtBegin(NODE *&st, int data)
{
    NODE *a = new NODE(data);
    a->next = st;
    st = a;
    cout<<"Added At Begin"<<endl;
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
void addBeforePos(NODE *&st, int data, int pos)
{
    if (pos <= 1 || st == NULL)
    {
        addAtBegin(st, data);
        return;
    }
    NODE *a = st, *b = NULL;
    int i = 1;
    while (a != NULL && i < pos)
    {
        b = a;
        a = a->next;
        i++;
    }
    NODE *c = new NODE(data);
    b->next = c;
    c->next = a;
    cout<<"Added"<<endl;
}

void addAfterPos(NODE *&st, int data, int pos)
{
    NODE *a = st;
    int i = 1;
    while (a != NULL && i < pos)
    {
        a = a->next;
        i++;
    }
    if (a != NULL)
    {
        NODE *c = new NODE(data);
        c->next = a->next;
        a->next = c;
    }
    cout<<"Added"<<endl;
}
int main()
{
    NODE *st = NULL;
    int opt, data, pos;
    while(1)
    {
        cout << "\n1. Add at Begin\n2. Add at End\n3. Add Before Position\n4. Add After Position\n5. Display\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> opt;
        if(opt>20) return 0;
        switch (opt)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            addAtBegin(st, data);
            break;
        case 2:
            cout << "Enter data: ";
            cin >> data;
            addAtEnd(st, data);
            break;
        case 3:
            cout << "Enter position and data: ";
            cin >> pos >> data;
            addBeforePos(st, data, pos);
            break;
        case 4:
            cout << "Enter position and data: ";
            cin >> pos >> data;
            addAfterPos(st, data, pos);
            break;
        case 5:
            cout << "Linked List: ";
            display(st);
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        case 7:
            dellFirstNode(st);
            break;
        case 8:
            dellLastNode(st);
            break;
        case 9:
            dellAllNodes(st);
            break;
        }
    }
}
