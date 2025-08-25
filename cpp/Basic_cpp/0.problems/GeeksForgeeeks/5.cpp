#include <iostream>
using namespace std;

int main (){
int x;
float y;
double i;
char e;



cout << " Entered the value  int x : ";
cin >> x;
cout << " Entered the value float y : ";
cin >> y ;

cout << " Entered the value double i : ";
cin >> i;
cout << " Entered the value char e : ";
cin >> e;

cout << "The value of int  x " << sizeof(x) << " \n";
cout << "The value of  float y  " << sizeof(y) << " \n";
cout << "The value of double i " << sizeof(i) << " \n";
cout << "The value of char e  " << sizeof(e) << " \n";






    return 0;
}