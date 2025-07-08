#include <iostream>
using namespace std;

class NODE {
public:
    int data;
    NODE *prev;
    NODE *next;
};

class DLIST {
public:
    NODE *st;
    NODE *ed;
    DLIST() {
        st = NULL;
        ed = NULL;
    }
};

NODE* createNode(int d) {
    NODE *a = new NODE;
    a->prev = a->next = NULL;
    a->data = d;
    return a;
}

void addAtEnd(DLIST &p, int d) {
    NODE *a, *b = createNode(d);
    if (p.st == NULL) {
        p.st = b;
    } else {
        a = p.ed;
        a->next = b;
        b->prev = a;
    }
    p.ed = b;
}

void addAtBeg(DLIST &p, int d) {
    NODE *a, *b = createNode(d);
    if (p.ed == NULL) {
        p.ed = b;
    } else {
        a = p.st;
        b->next = a;
        a->prev = b;
    }
    p.st = b;
}

void insertBeforePos(DLIST &p, int pos, int d) {
    NODE *a = p.st, *b, *c;
    int i = 1;
    if (pos < 1 && p.st == NULL)
        return;
    if (pos == 1) {
        addAtBeg(p, d);
        return;
    }
    while (i < pos && a != NULL) {
        b = a;
        a = a->next;
        i++;
    }
    if (a == NULL)
        return;
    c = createNode(d);
    b->next = c;
    c->prev = b;
    c->next = a;
    a->prev = c;
}

void insertAfterPos(DLIST &p, int pos, int d) {
    NODE *a = p.st, *b, *c;
    int i = 1;
    if (pos < 1 && p.st == NULL && p.ed == NULL)
        return;
    if (pos == 1) {
        addAtEnd(p, d);
        return;
    }
    while (i <= pos && a != NULL) {
        b = a;
        a = a->next;
        i++;
    }
    if (a == NULL && i == pos + 1) {                /////very imp case  imp imp imp
        addAtEnd(p, d);
        return;
    }
    if (a == NULL && i <= pos)
        return;
    c = createNode(d);
    b->next = c;
    c->prev = b;
    c->next = a;
    a->prev = c;
}

void dellFirst(DLIST &p) {
    NODE *a = p.st;
    NODE *b;
    if (p.st == NULL)
        return;
    if (p.st == p.ed) {
        p.st = p.ed = NULL;
    } else {
        b = a->next;
        b->prev = NULL;
        p.st = b;
    }
    delete a;
}

void dellLast(DLIST &p) {
    NODE *a = p.ed, *b;
    if (p.ed == NULL)
        return;
    if (p.st == p.ed) {
        p.st = p.ed = NULL;
    } else {
        b = a->prev;
        b->next = NULL;
        p.ed = b;
    }
    delete a;
}

void dellAtPos(DLIST &p, int pos) {
    NODE *a = p.st, *b, *c;
    int i = 1;
    if (pos < 1 || p.ed == NULL)
        return;
    if (pos == 1) {
        dellFirst(p);
        return;
    }
    while (i < pos && a != NULL) {
        b = a;
        a = a->next;
        i++;
    }
    if (a == NULL)
        return;
    c = a->next;
    b->next = c;
    if (c)
        c->prev = b;
    delete a;
}

void dellAll(DLIST &p) {
    NODE *a = p.st, *b;
    while (a != NULL) {
        b = a->next;
        delete a;
        a = b;
    }
    p.st = p.ed = NULL;
}

int countNodes(DLIST &p) {
    NODE *a = p.st;
    int cnt = 0;
    while (a != NULL) {
        cnt++;
        a = a->next;
    }
    return cnt;
}

int sumOfNodes(DLIST &p) {
    NODE *a = p.st;
    int sum = 0;
    while (a) {
        sum += a->data;
        a = a->next;
    }
    return sum;
}

void displayStartToEnd(DLIST &p) {
    NODE *a = p.st;
    if (p.st == NULL)
        cout << "\nEmpty List";
    else {
        cout << "\nData";
        while (a != NULL) {
            cout << " " << a->data;
            a = a->next;
        }
    }
}

void displayEndToStart(DLIST &p) {
    NODE *a = p.ed;
    if (p.ed == NULL)
        cout << "\nEmpty List";
    else {
        cout << "\nData";
        while (a != NULL) {
            cout << " " << a->data;
            a = a->prev;
        }
    }
}

int main() {
    DLIST p;
    cout << "Double Linked List\n";
    int opt, pos, d;
    while (1) {
        cout << "\n1. Add at end\n2. Add at begin\n3. Display start to end\n4. Display End to Start\n5. Insert ith node Before Pos\n6. Insert ith node After Pos\n7. Delete Last Node\n8. Delete First Node\n9. Delete ith node\n10. Delete all Nodes\n11. Count All nodes\n12. Sum of Nodes\n13. Exit\n";
        cin >> opt;
        if (opt > 13) {
            cout << "Invalid Option !!";
            break;
        }
        switch (opt) {
        case 1:
            cout << "Enter data to add at end: ";
            cin >> d;
            addAtEnd(p, d);
            break;
        case 2:
            cout << "Enter data to add at begin: ";
            cin >> d;
            addAtBeg(p, d);
            break;
        case 3:
            displayStartToEnd(p);
            break;
        case 4:
            displayEndToStart(p);
            break;
        case 5:
            cout << "Enter position to insert before: ";
            cin >> pos;
            cout << "Enter data to insert before position " << pos << ": ";
            cin >> d;
            insertBeforePos(p, pos, d);
            break;
        case 6:
            cout << "Enter position to insert after: ";
            cin >> pos;
            cout << "Enter data to insert after position " << pos << ": ";
            cin >> d;
            insertAfterPos(p, pos, d);
            break;
        case 7:
            dellLast(p);
            cout << "Last node deleted.\n";
            break;
        case 8:
            dellFirst(p);
            cout << "First node deleted.\n";
            break;
        case 9:
            cout << "Enter position to delete: ";
            cin >> pos;
            dellAtPos(p, pos);
            cout << "Node at position " << pos << " deleted.\n";
            break;
        case 10:
            dellAll(p);
            cout << "All nodes deleted.\n";
            break;
        case 11:
            cout << "Total nodes: " << countNodes(p) << "\n";
            break;
        case 12:
            cout << "Sum of nodes: " << sumOfNodes(p) << "\n";
            break;
        case 13:
            return 0;
        }
    }
    return 0;
}
