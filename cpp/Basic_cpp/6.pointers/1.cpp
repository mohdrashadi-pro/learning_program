#include <iostream>
using namespace std;

int main () {

cout << "======== Variable ======" << endl;

int x = 10;
cout << "the value " << x << endl;
cout << " Memory address is   : "<< &x << endl;

cout << "======== Pointer ======" << endl;
int* y = &x;

cout << "Memory Address y " << y << endl;
cout << "the Value *y: " << *y << endl;


x = 15;


cout << "Value *y after changeing x : " << *y << endl;

delete y;
cout << "Value *y after changeing y : " << y << endl;


    return 0;
}