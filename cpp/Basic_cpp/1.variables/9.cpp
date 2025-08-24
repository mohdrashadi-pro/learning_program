#include <iostream>
using namespace std;


bool checkyear(int year) {
    if (year % 400 == 0) {
return true; 

    } else if (year % 100 == 0) {
        return false;
    }
else if (year % 4 == 0) {
    return true ;
}
else {
    return false; 
}



}







int main () {
    

int year;
cout << "enter your year : ";
cin >> year;

checkyear(year);
checkyear(year) ? cout <<"Leap Year " : cout <<" Not a Leap Yeat ";





    return 0;
}