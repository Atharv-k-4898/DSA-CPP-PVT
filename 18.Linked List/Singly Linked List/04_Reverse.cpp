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
void reverse(NODE *&st)
{
    NODE *a = st, *b, *c = NULL;
    while (a != NULL)
    {
        b = a;
        a = a->next;
        b->next = c;
        c = b;
    }
    st = b;
}
int main()
{
    NODE *st = NULL;
    int opt, data, pos;
    while(1)
    {
        cout << "\n1. Add at End\n2. Display\n3. Reverse\n";
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
            reverse(st);
            break;
        }
    }
}
