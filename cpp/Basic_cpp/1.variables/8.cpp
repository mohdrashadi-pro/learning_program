#include <iostream>
using namespace std; 

int main (){

int num1, num2, num3;

cout << " Enter the value A : " ;
cin >> num1;
cout << " Enter the value B : " ;
cin >> num2;
cout << " Enter the value C : " ;
cin >> num3;

if (num1 > num2  && num1 > num3) {
    cout << num1  << " A  is largest";
} else if (num2 > num1  && num2 > num3) {
    cout << num2 << "B is leargest";
} else  {

cout << num3 << " :  C is largest  ";

}






    return 0;
}