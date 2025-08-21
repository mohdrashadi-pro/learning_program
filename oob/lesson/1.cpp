#include <iostream>
#include <algorithm>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

    bool isExpired() {
        int currentYear = 2025;
        return (currentYear - year) > 15;
    }

public:
    // Setters
    void setBrand(string n) {
        n.erase(remove_if(n.begin(), n.end(), ::isdigit), n.end());
        brand = n;
    }

    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Getters
    string getBrand() { return brand; }
    string getModel() { return model; }
    int getYear() { return year; }

    // Display method
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Expired: " << (isExpired() ? "Yes" : "No") << endl;
    }
};

int main() {
    Car car1, car2;
    string input;
    int year;

    cout << "Enter the name of first car: ";
    cin >> input;
    car1.setBrand(input);

    cout << "Enter the name of second car: ";
    cin >> input;
    car2.setBrand(input);

    cout << "Enter the model of first car: ";
    cin >> input;
    car1.setModel(input);

    cout << "Enter the model of second car: ";
    cin >> input;
    car2.setModel(input);

    cout << "Enter the year of first car: ";
    cin >> year;
    car1.setYear(year);

    cout << "Enter the year of second car: ";
    cin >> year;
    car2.setYear(year);

    cout << "\n--- Car 1 Info ---\n";
    car1.displayInfo();

    cout << "\n--- Car 2 Info ---\n";
    car2.displayInfo();

    return 0;
}