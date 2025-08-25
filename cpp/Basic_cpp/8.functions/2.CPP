#include <iostream>
using namespace std;




//Definition

int add(int x, int y) {


int formula = x *  2 + y * 2;

    return formula;
}




int main () {


cout << add(30, 15) << endl; // Function call 

int result = add(10, 15); // Function call 
cout << result;


    return 0;

}