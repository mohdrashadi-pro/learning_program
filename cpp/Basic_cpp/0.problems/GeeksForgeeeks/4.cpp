#include <iostream>
using namespace std;

int main () {

int x, y;

cout <<" Enter first number x ";
cin >> x;
cout << "Enter second number y ";
cin >> y;




cout <<" Before swap:  x " << " =  " << x <<  " ,with y = " << y;
cout <<"\n";
cout << "=====================================================\n";
// temporary varible 

int i;

i = x;
x = y;
y = i;

cout <<" After swap:  x " << " =  " << x <<  " ,with y = " << y;






    return 0;
}