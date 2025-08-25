#include <iostream>
using namespace std;

int main (){
int i;
string student[5] = {};
 
for ( int i = 0 ; i < 5 ; i++) {

    
    
    cout << "Enter the names of your student: " ;
    cin >> student[i];




}

        cout << "Student " << (i + 1) << ": " << student[i] << endl;
i++;
    return 0;
}