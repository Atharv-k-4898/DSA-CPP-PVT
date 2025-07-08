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
// Q is in nbook and check for explaination there

bool checkForLoop(NODE *&st)
{
    if (st == NULL)
    {
        cout << "LL is empty";
        return false;
    }
    NODE *fast = st;
    NODE *slow = st;
    while (fast != NULL)
    {                      // fast ka imp he
        fast = fast->next; // fast ko ek bar
        if (fast != NULL)
        {
            fast = fast->next; // fast ko do bar fir
            slow = slow->next; // slow ko ek next kara
        }
        if (fast==slow)
        {
            return true;
        }
    }
    return false;
}
NODE *getFirstNodeOfLoop(NODE *&st)
{
    NODE *fast = st;
    NODE *slow = st;
    while (fast != NULL)
    {                      // fast ka imp he
        fast = fast->next; // fast ko ek bar
        if (fast != NULL)
        {
            fast = fast->next; // fast ko do bar fir
            slow = slow->next; // slow ko ek next kara
        }                    /// step 1 meet fast and slow 
        if (fast==slow)
        {
            slow=st;         /// step 2 slow ko st kiya
            break;
        }
    }
    while(slow !=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
int main()
{
    NODE *st = new NODE(10);
    NODE *sec = new NODE(20);
    NODE *third = new NODE(30);
    NODE *forth = new NODE(40);
    NODE *fifth = new NODE(50);
    NODE *sixth = new NODE(60);
    NODE *seventh = new NODE(70);
    NODE *eighth = new NODE(80);
    NODE *nineth = new NODE(90);
    st->next = sec;
    sec->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = nineth;
    nineth->next = sixth;

       // display(st); we will get a loop
    // cout<<"Loop present? "<<checkForLoop(st);
    if(checkForLoop(st)){
        cout << "First node of loop is: " << getFirstNodeOfLoop(st)->data << endl;
    }
    else{
        cout << "Loop not present" << endl;
    }

}