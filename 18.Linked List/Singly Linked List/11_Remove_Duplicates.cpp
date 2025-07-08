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

void removeDuplicates(NODE *&st)
{
    if(st == NULL) return;
    if(st->next == NULL) {
        cout << "Single Node" << endl;
        return;
    }

    NODE *curr = st;
    while (curr)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            // equal
            NODE *tmp = curr->next;
            curr->next = curr->next->next;
            tmp->next = NULL;
            delete tmp;
        }
        else
        {
            // not equal
            curr = curr->next;
        }
    }
}

int main()
{
    NODE *st = NULL;
    int opt, data, pos, k;
    while (1)
    {
        cout << "\n1. Add at End\n2. Display\n3. Remove Duplicates\n";
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
            removeDuplicates(st);
            break;
        }
    }
}
