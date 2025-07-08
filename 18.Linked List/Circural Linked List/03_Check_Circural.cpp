#include <iostream>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;
};

NODE *createNode(int d)
{
    NODE *a = new NODE;
    a->data = d;
    a->next = nullptr;
    return a;
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
        do
        {
            cout << "  " << a->data;
            if (a == st)
                break;
            a = a->next;
        } while (1);
    }
}
void addAtEnd(NODE *&st, int d)
{
    NODE *a = createNode(d), *b;
    if (st == nullptr)
    {
        a->next = a;
    }
    else
    {
        b = st;
        a->next = b->next; // add of 20 is 100 which will give to 10
        b->next = a;       // creating 20 after 10
    }
    st = a; // 100
}

bool isCircural(NODE *&st)
{
    // Method 1 traverse array for only one node is again we come there then true return
    NODE *temp = st;
    while (1)
    {
        temp = temp->next;
        if (temp == st)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    NODE *p = nullptr;
    int opt, data;
    while (1)
    {
        cout << "\nCircular Data\n";
        cout << "\nMenu:\n";
        cout << "1.Add end\n";
        cout << "2.Is circural\n";
        cout << "3.Display\n";
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
            cout << "List is :" << isCircural(p) << endl;
            break;
        case 3:
            displayNodes(p);
            break;
        }
    }
    return 0;
}
