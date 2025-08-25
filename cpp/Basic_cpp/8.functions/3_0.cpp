#include <iostream>
using namespace std;

// String Repeat 

string stringRepeat (string st, int r) {

string result ;

for (int i = 0; i < r; i++)
{
    
  result = result + st;
}

return result;

}


int main () {



cout <<  stringRepeat("mohammed ", 3 ) << endl;


    return 0;
}