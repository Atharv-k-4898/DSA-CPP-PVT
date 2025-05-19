#include <iostream>
using namespace std;

int main()
{
    int n = 5; 
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout << "*";
        }
        for (int j = 1; j <= i; j++) {
           // if(j==i){
           // cout << i;
           // }
           // else{
                cout<<i<<"*" ;
           // }
        }
        for (int j = i - 1; j >= 1; j--) {
              if(j==1){
            cout << i;
            }
            else{
                cout<<i<<"*";
            }
        }
        for(int j=0 ; j<n-i;j++){
            cout<<"*";
        }
        cout << endl;
    }

    return 0;
}
