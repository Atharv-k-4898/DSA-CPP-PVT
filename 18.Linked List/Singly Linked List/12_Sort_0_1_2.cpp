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

// void sort012(NODE *st){
//     if(st == NULL) return;

//     int count0 = 0, count1 = 0, count2 = 0;
//     NODE *a = st;

//     // Step 1: Count 0s, 1s, and 2s
//     while(a != NULL){
//         if(a->data == 0) count0++;
//         else if(a->data == 1) count1++;
//         else if(a->data == 2) count2++;
//         a = a->next;
//     }

//     // Step 2: Refill list with 0s, then 1s, then 2s
//     a = st;
//     while(count0--){
//         a->data = 0;
//         a = a->next;
//     }
//     while(count1--){
//         a->data = 1;
//         a = a->next;
//     }
//     while(count2--){
//         a->data = 2;
//         a = a->next;
//     }

//     cout << "Sorted 0s, 1s, and 2s in the list.\n";
// }
NODE* sort012(NODE *&st)
{
    NODE *zerost = new NODE(-1);
    NODE *zeroed = zerost;

    NODE *twost = new NODE(-1);
    NODE *twoed = twost;

    NODE *onest = new NODE(-1);
    NODE *oneed = onest;

    NODE *a = st;
    while (a)
    {
        if (a->data == 0)
        {
            // 0 wali node alag karo
            NODE *tmp = a;
            a = a->next;
            tmp->next = NULL;

            // ab a ko zerowali ll me append karo
            zeroed->next = tmp;
            zeroed = tmp;
        }
        if (a->data == 1)
        {
            // 1 wali node alag karo
            NODE *tmp = a;
            a = a->next;
            tmp->next = NULL;

            // ab a ko zerowali ll me append karo
            oneed->next = tmp;
            oneed = tmp;
        }
        if (a->data == 2)
        {
            // 2 wali node alag karo
            NODE *tmp = a;
            a = a->next;
            tmp->next = NULL;

            // ab a ko zerowali ll me append karo
            twoed->next = tmp;
            twoed = tmp;
        }
    }
    // modify one wali list i.e remove -1
    NODE * tmp=onest;
    onest=onest->next;
    tmp->next=NULL;
    delete tmp;

    //modify 2 wali list i.e remove -1
    tmp=twost;
    twost=twost->next;
    tmp->next=NULL;
    delete tmp;

    //join all nodes
    if(onest){
        zeroed->next=onest; //conection betn 0 and 1
        if(twost){
            oneed->next=twost;
        }
    }
    else{ // one wali empty
            if(twost){
                zeroed->next=twost;
            }
    }
    // remove zerost dummy node
    tmp=zerost;
    zerost=zerost->next;
    tmp->next=NULL;
    delete tmp;

    // return zero head
    return zerost;
}

int main()
{
    NODE *st = NULL;
    int opt, data, pos, k;
    while (1)
    {
        cout << "\n1. Add at End\n2. Display\n3. Sort 0 1 2\n";
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
            st=sort012(st);
            break;
        }
    }
}
