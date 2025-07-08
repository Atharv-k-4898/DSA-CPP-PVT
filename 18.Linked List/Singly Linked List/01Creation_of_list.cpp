#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;
class NODE{
public:
    int data;
    NODE *next;
    // constructor
    NODE(){
        this->data=0;
        this->next=NULL;
    }
    NODE(int data){
        this->data=data;
        this->next=NULL;
    }
};
void display(NODE *st){
    NODE *a = st;             //a ko head pointer ka address de do
    while (a!=NULL)           // jab tak null nahi hota matlab list ka end nahi hota tabtak loop chalao
    {
        cout<<a->data <<"  "; // data print karo
        a=a->next;            // pointer ko agge bhejo
    }
    
}
int main()
{
    // Creation of six nodes
    NODE* first = new NODE(10);
    NODE* second = new NODE(20);
    NODE* third = new NODE(30);
    NODE* fourth = new NODE(40);
    NODE* fifth = new NODE(50);
    NODE* sixth = new NODE(60);

    // Linking of the six nodes
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL; // Last node's next should be NULL

    // Printing the data
    display(first);
    return 0;
}