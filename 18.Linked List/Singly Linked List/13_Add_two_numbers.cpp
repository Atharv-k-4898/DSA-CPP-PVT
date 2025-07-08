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
    if (st == NULL)
        cout << "Empty List" << endl;
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
        cout << "Empty List But Added " << data << " at end" << endl;
        return;
    }
    NODE *a = st, *b = new NODE(data);
    while (a->next != NULL)
    {
        a = a->next;
    }
    a->next = b;
    b->next = NULL;
    cout << "Added At end" << endl;
}
NODE *reverse(NODE *&st)
{
    NODE *a = st, *b, *c = NULL;
    while (a != NULL)
    {
        b = a;
        a = a->next;
        b->next = c;
        c = b;
    }
    return c;
}
NODE *addTwoLinkedLists(NODE *&st1, NODE *&st2)
{
    // st 1 reverse both
    st1 = reverse(st1);
    st2 = reverse(st2);
    // st 2 add both
    NODE *ansst = NULL;
    NODE *ansed = NULL;
    int carry = 0;
    while (st1 && st2)
    {
        int sum = carry + st1->data + st2->data;
        int dig = sum % 10;
        carry = sum / 10;
        // create new node for dig
        NODE *newNode = new NODE(dig);
        // attach new to ans dig
        if (ansst == NULL)
        {
            // first node insert kar rahe ho
            ansst = newNode;
            ansed = newNode;
        }
        else
        {
            ansed->next = newNode;
            ansed = newNode;
        }
        st1 = st1->next;
        st2 = st2->next;
    }
    while (st1)
    {
        int sum = carry + st1->data;
        int dig = sum % 10;
        carry = sum / 10;
        // create new node for dig
        NODE *newNode = new NODE(dig);
        // attach new to ans dig
        ansed->next = newNode;
        ansed = newNode;
        st1 = st1->next;
    }
    while (st2)
    {
        int sum = carry + st2->data;
        int dig = sum % 10;
        carry = sum / 10;
        // create new node for dig
        NODE *newNode = new NODE(dig);
        // attach new to ans dig
        ansed->next = newNode;
        ansed = newNode;
        st2 = st2->next;
    }
    // handle for carry
    while (carry)
    {
        int sum=carry;
        int dig = sum % 10;
        carry = sum / 10;
        // create new node for dig
        NODE *newNode = new NODE(dig);
        // attach new to ans dig
        ansed->next = newNode;
        ansed = newNode;
    }
    // st 3 reverse ans ll
    ansst=reverse(ansst);
    return ansst;
}
int main()
{
    NODE *st1 = NULL;
    NODE *st2 = NULL;
    int opt,data;
    while (1)
    {
        cout << "\n1. Add at End List 1\n2. Add at End List 2\n3. Display\n4. Add two Linked Lists\n";
        cout << "Enter your choice: ";
        cin >> opt;
        if (opt > 4)
            return 0;
        switch (opt)
        {
        case 1:
            cout << "Enter data for 1: ";
            cin >> data;
            addAtEnd(st1, data);
            break;
        case 2:
            cout << "Enter data for 2: ";
            cin >> data;
            addAtEnd(st2, data);
            break;
        case 3:
            cout << "Linked List 1: ";
            display(st1);
            cout << "Linked List 1: ";
            display(st2);
            break;
        case 4:
            NODE *ans=addTwoLinkedLists(st1, st2);
            display(ans);
            break;
        }
    }
}
