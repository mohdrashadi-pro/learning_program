#include <iostream>
using namespace std;

// String Repeat 
string strrepeat(string st, int r, string w2, int y) {
    string result;

    for (int i = 0; i < r; i++) {
        result += st + w2 + to_string(y) + "\n";
        y++; // increase y each time
    }

    return result;
}

int main() {
    string st;
    int r;
    int y;

    cout << "Enter a string: ";
    cin >> st;

    cout << "Enter how many times to repeat: ";
    cin >> r;

    cout << "Enter starting number: ";
    cin >> y;

    cout << strrepeat(st, r, "  Your order : ", y) << endl;

    return 0;
}