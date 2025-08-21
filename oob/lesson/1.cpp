#include <iostream>
using namespace std; 

class car {
public: 
// Properties 
string brands;
string model;
int year;


// Methode 

void displayinfo() {
cout << "Brands:" <<brands<< endl;
cout << "model: " <<model<< endl;
cout << "year: " <<year << endl;



}



};

int main () {



    //object 

car car1;
car car2;

car1.brands = "Niasan  ";
car2.brands = "BMW   ";

car1.model = "sunnay   ";
car2.model = "normal    ";

car1.year = 2001;
car2.year = 2003;


car1.displayinfo() ;
car2.displayinfo() ;


    return 0;
}