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
// int returnMiddle(NODE *&st){
//     NODE *a=st;
//     int middle;
//     if(countNodes%2==0) {
//         middle=countNodes(st)/2;
//     }else{
//         middle=countNodes(st)+1;
//     }
//     int i=1;
//     while(i<middle && a){
//         a=a->next;
//         i++;
//     }
//     return a->data;
// }


// Slow Fast Pointer Approach
// Edge Cases are imp
NODE* returnMiddle(NODE*&st){
    if(st==NULL){
    cout<<"Empty List"<<endl;
    return st;
    }
    if(st->next == NULL){
        return st;
    }
    NODE *fast=st;
    NODE *slow=st;
    while(slow!=NULL && fast!=NULL){// fast ka imp he
        fast=fast->next;            // fast ko ek bar
        if(fast!=NULL){
            fast=fast->next;        // fast ko do bar fir
            slow=slow->next;        // slow ko ek next kara
        }
    }
    return slow;
}

// New Approach
int main()
{
    NODE *st = NULL;
    int opt, data, pos;
    while(1)
    {
        cout << "\n1. Add at End\n2. Display\n3. Middle Element\n";
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
            cout<<returnMiddle(st)->data;
            break;
        }
    }
}
