#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {

    
    char ch = 98; // Here 98 is an integer which will be taken as the ASCII value of the character. 98 is the ASCII value of char b. Hence this will give b as the output.
    cout<<ch<<endl;
    
    char ch = 97.9; // Here the integer part is only considered and hence 97 is the integer part which is the ASCII value of character a.
    cout<<ch<<endl;
    
    char ch = 97.92; // Here the integer part is only considered and hence 97 is the integer part which is the ASCII value of character a.
    cout<<ch<<endl;
    
    int ch = 'a'; // The ASCII value of a will be stored in ch i.e. ch will have 97 as integer value
    cout<<ch;
    int a = 7.9; // Here only integer part will be stored and hence 7 will be the output
    cout<<a<<endl;
    
    int a = 7.92; // Here only integer part will be stored and hence 7 will be the output
    cout<<a<<endl;
    
    float num = 9; // 9.0 should be the correct answer but the compiler will ignore .0 and hence 9 will be the output 
    cout<<num<<endl;
    
    float num = 'b'; // The ASCII value of b is 98 which should be stored as 98.0 but again the compiler will ignore the .0 and hence 98 will be the output.
    cout<<num<<endl;
    
    float num = 9.66666666666666; // Such high precision number can not be stored in double and hence it will be rounded off to the precision value of float.
    cout<<num<<endl;
    
    double num = 9;  // It should have stored as 9.0 but the compiler will ignore .0 decimal and hence the output will 9.
    cout<<num<<endl;
    
    double ch = 'a'; // Here the ASCII value of a will be 97 and it should have been stored as 97.0 but the compiler will again ignore the .0 and hence 97 will be the output
    cout<<ch<<endl;
    
    double num = 9.766; // Double can easily accomadate any float value as double as higher precision than float
    cout<<num<<endl;
    

    int a = 3/2.1;  // Will be typecasting to integer and hence give 1 as output
    float b = 3/2.1; // Will give 1.42857 as output
    char c = 96/1.9; // 50.5 which will be typecasted to the nearest ASCII code which is 50 which is the ASCII code of 2
    double d = 3/2.1; // 1.42857 as output 
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int a = 3/2;  // Will give 1 as output as integer part 
    float b = 3/2; // Will give 1 as output
    char c = 96/2; // 48 which will be typecasted to char which is the ASCII code of 0
    double d = 3/2; // 1 as output again 
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int a = 3/(double)2.1;  // Will be typecasting to integer and hence give 1 as output
    float b = 3/(double)2.1; // Will give 1.42857 as output
    char c = 96/(double)1.9; // 50.5 which will be typecasted to the nearest ASCII code which is 50 which is the ASCII code of 2
    double d = 3/(double)2.1; // 1.42857 as output 
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int a = 2.3/2;  // Will only result in the integer part
    float b = 2.3/2; // Will be giving the output as the decimal (1.15)
    char c = 96.7/2; // 48.35 which will be typecasted to 48 as the ASCII code of 0 hence 0 will be printed
    double d = 2.3/2; // Will be giving the output in decimal (1.15)
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int a = 'A' / 2; // A is type casted to 65 and then 65/2 gives 32.5 which will be typecasted to intger and hence gives 32 as the output
    char b = 'a'/2; // ASCII code of a is 97 and 97/2 is 48 as int/int is always integer and hence 48 is the ASCII code of 0 and hence 0 will be printed.
    float c = 'A'/2; // A is typecasted to 65 which is an integer and hence int/int will be integer always and hence  32 will be the output
    double d = 'A'/2; // A is typecasted to 65 which is an integer and hence int/int will be integer always and hence  32 will be the output
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int a = 2.3/2.1;  // Will only result in the integer part
    float b = 2.3/2.1; // Will be giving the output as the decimal (1.09524)
    char c = 110/2.1; // 52.38 which will be typecasted to 52 as the ASCII code of 4 hence 4 will be printed
    double d = 2.3/2.1; // Will be giving the output in decimal (1.09524)
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int a = 'A' / 2.1; // A is type casted to 65 and then 65/2.1 gives 30.95 which will be typecasted to intger and hence gives 30 as the output
    char b = 'e'/2.1; // ASCII code of e is 101 and 101/2.1 is 48.09 which will be typecasted to lowest ASCII value which is 48 and hence 0 is the output
    float c = 'A'/2.1; // 65/2.1 gives the output as 30.9524
    double d = 'A'/2.1; // 65/2.1 gives the output as 30.9524
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int a = 'A' / 'B'; // ASCII code of A is 65 and ASCII code of B is 66 so 65/66 is 0.984 and hence only integer part will be considered as it will be typecasted to int. Hence 0 is the output. 
    char b = 'A'/'A';  // ASCII value = 1 is occupied by smiley symbol and hence that will be the output
    float c = 'A'/'B';  // Works as int/int
    double d = 'A'/'B'; // Works as int/int
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
return 0;
}