#include <iostream>
using namespace std;

int main(){

    float p;
    float time;
    float rate;
cout << "enterd Prinicipal : ";
cin >> p;
cout << "enterd time  : ";
cin >> time;
cout << "enterd rate : ";
cin >> rate;
cout << "==================== The input ====================\n";
cout << "you enter \n" << "Time " << time << "\n" << "rate " << rate  << "\n" <<"Prinicipal " << time << "\n" << endl;



    double amoung = p * ((pow(1+rate/100, time)));
    double ci = amoung - p;

    cout << "the comound intrest is :  " << ci << endl;






    return 0;
}