#include <iostream>
using namespace std;

int main()
{
    char a[] = "xyz";      // string literal stored as a char array
    char *ptr = &a[0];     // pointer to the first character

    cout << a << endl;     // prints the full string: xyz
    cout << ptr << endl;   // also prints xyz (since it's a pointer to char array)
    
    cout<<a[0] <<" "<<ptr[0]<<endl;
    return 0;
}
