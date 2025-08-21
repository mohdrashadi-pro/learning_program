#include <iostream>
using namespace std; 


// Definition 
class car {
private: 
bool isExpired() {
int currentYear = 2025;
return (currentYear -  year ) > 15 ;


}



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
cout << "Expired "  << (isExpired () ? "Yes " : "No") << endl;
}
};

int main () {
    //object 
car car1;
car car2;
cout << "Enter the the name of first car: ";
cin >>car1.brands;  

cout << "Enter the the name of second car: ";
cin >>car2.brands; 




 


cout << "Enter the the name of modul car: ";
cin >>car1.model;
cout << "Enter the the name of modul  car: ";
cin >>car2.model; 

cout << "Enter the the name of year car: ";
cin >>car1.year;
cout << "Enter the the name of year  car: ";
cin >>car2.year;




car1.displayinfo() ;
car2.displayinfo() ;


    return 0;
}