#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;
    NODE *prev;
};

NODE *createNode(int d)
{
    NODE *a = new NODE;
    a->data = d;
    a->next = nullptr;
    a->prev = nullptr;
    return a;
}

void addAtEnd(NODE *&st, int d)
{
    NODE *a = createNode(d), *b;
    if (st == nullptr)
    {
        a->next = a;
        a->prev = a;
    }
    else
    {
        b = st;
        a->next = b->next;
        a->prev = b;
        b->next->prev = a;
        b->next = a;
    }
    st = a;
}

void addAtBeg(NODE *&st, int d)
{
    NODE *a = createNode(d), *b;
    if (st == nullptr)
    {
        a->next = a;
        a->prev = a;
        st = a;
    }
    else
    {
        b = st->next;
        a->next = b;
        a->prev = st;
        b->prev = a;
        st->next = a;
    }
}

void displayNodes(NODE *st)
{
    NODE *a;
    if (st == nullptr)
    {
        cout << "\nEmpty List\n";
    }
    else
    {
        cout << "\nData\n";
        a = st->next;
        while (true)
        {
            cout << "  " << a->data;
            if (a == st)
                break;
            a = a->next;
        }
    }
}

void delFirst(NODE *&st)
{
    NODE *a;
    if (st == nullptr)
    {
        cout << "List is already empty!\n";
        return;
    }
    if (st == st->next)
    {
        delete st;
        st = nullptr;
    }
    else
    {
        a = st->next;
        st->next = a->next;
        a->next->prev = st;
        delete a;
    }
}

void delLast(NODE *&st)
{
    NODE *a, *b;
    if (st == nullptr)
    {
        cout << "List is already empty!\n";
        return;
    }
    if (st == st->next)
    {
        delete st;
        st = nullptr;
    }
    else
    {
        a = st->next;
        while (a != st)
        {
            b = a;
            a = a->next;
        }
        b->next = st->next;
        st->next->prev = b;
        st = b;
        delete a;
    }
}

int main()
{
    NODE *p = nullptr;
    int opt, data;
    while (1)
    {
        cout << "\nDouble Circular Linked List\n";
        cout << "\nMenu:\n";
        cout << "1.Add end\n";
        cout << "2.Add first\n";
        cout << "3.Display\n";
        cout << "4.Delete First\n";
        cout << "5.Delete Last\n";
        cout << "Enter choice: ";
        cin >> opt;
        if (opt > 5)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            cout << "Enter Data\n";
            cin >> data;
            addAtEnd(p, data);
            break;
        case 2:
            cout << "Enter Data\n";
            cin >> data;
            addAtBeg(p, data);
            break;
        case 3:
            displayNodes(p);
            break;
        case 4:
            delFirst(p);
            displayNodes(p);
            break;
        case 5:
            delLast(p);
            displayNodes(p);
            break;
        }
    }
    return 0;
}
