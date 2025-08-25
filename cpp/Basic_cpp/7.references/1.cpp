#include <iostream>
using namespace std;


int main () {

int x = 10;

cout << "value of x  : " << x << endl;
cout << "value of &x : " << &x << endl;
 


cout <<"pointer " << endl;

int* y = &x;
cout << "value of y  : " << y << endl;
 
cout <<"References " << endl;
int& ref = x;
cout << "value of ref: " << ref << endl;

x  = 67;
cout << "value of x  : " << ref << endl;

*y  = 15;
cout << "value of x  : " << x << endl;
    return 0;
}