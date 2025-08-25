#include <iostream>
using namespace std;




//Definition
/*

1) Re-use approach 
2) Flexiblty 

*/

// single responsibility 

int add(int x, int y) {



int formula = x *  2 + y * 2;

    return formula;
}

int prodct(int number1, int number2 ){

    return number1 * number2;
}
int getuserinput(int index) {
    int n;
    cout << "Enter number " << index << " : " << endl;
    cin >> n;

    return n;

}

void calculatorapp() {
int n1 = getuserinput(1);
int n2 = getuserinput(2);


int selection;
int reslut;
cout << "Selection calautor " << endl;
cout << "1) sum " << endl;
cout << "2) prodect " << endl;

cin >> selection;

switch (selection)
{
case 1:
  reslut = add(n1, n2);
    break;
    
case 2:
  reslut = prodct(n1, n2);
    break;


}


cout << "Result " << reslut; 




}






int main () {



    calculatorapp();
    return 0;

}