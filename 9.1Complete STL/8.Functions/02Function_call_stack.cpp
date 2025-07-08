#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void printB(){
    cout<<"inside b"<<endl;
    cout<<"going back to main"<<endl;
}
void printA(){
    cout<<"inside a"<<endl;
    printB();
    cout<<"Going to b"<<endl;
}
int main()
{
    cout<<"inside main"<<endl;
    printA();
    cout<<"back in main"<<endl;
    return 0;
}