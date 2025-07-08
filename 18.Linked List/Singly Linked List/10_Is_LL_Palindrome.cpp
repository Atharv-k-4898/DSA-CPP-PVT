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

NODE *reverseLinkedList(NODE *&st)
{
    NODE *a = st, *b, *c = NULL;
    while (a != NULL)
    {
        b = a;
        a = a->next;
        b->next = c;
        c = b;
    }
    return c; // fixed
}

bool isPalindrome(NODE *&st)
{
    if (st == NULL)
    {
        cout << "LL is empty" << endl;
        return false;
    }
    if (st->next == NULL)
    {
        return true;
    }

    // Step 1) find middle node
    NODE *slow = st;
    NODE *fast = st;
    while (slow != NULL && fast != NULL)
    {                      // fast ka imp he
        fast = fast->next; // fast ko ek bar
        if (fast != NULL)
        {
            fast = fast->next; // fast ko do bar fir
            slow = slow->next; // slow ko ek next kara
        }
    }
    // Step 2) Reverse linked list next middle
    NODE *reverseKaHead = reverseLinkedList(slow->next);
    slow->next = reverseKaHead;

    // Step 3) Start Comparasion
    NODE *tmp1 = st;
    NODE *tmp2 = reverseKaHead;
    while (tmp2 != NULL)
    {
        if (tmp1->data != tmp2->data)
            return false;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return true;
}
int main()
{
    NODE *st = NULL;
    int opt, data, pos, k;
    while (1)
    {
        cout << "\n1. Add at End\n2. Display\n3. Is Palindrome Element\n";
        cout << "Enter your choice: ";
        cin >> opt;
        if (opt > 3)
            return 0;
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
            cout << "Is palinrome? " << isPalindrome(st);
            break;
        }
    }
}
