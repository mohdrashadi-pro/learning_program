#include <iostream>
using namespace std;

int main(){

const int rows = 5;
const int columns  = 2;

string student[rows][columns] = 
{

{"mohammed", "Tom"},
{"wnag ", " raa"},
{"ewr", "wrtewr"}


};

for (int  i = 0; i < rows; i++)
{
for (int c = 0; c  < columns; c++)
{
cout  << student[i][c] << " ";


}
cout << endl;

}








    return 0;
}