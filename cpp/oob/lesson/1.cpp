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
    virtual void displayInfo() {   // virtual so derived class can override
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Expired: " << (isExpired() ? "Yes" : "No") << endl;
    }
};

// Derived class
class ElectricCar : public Car {
private: 
    int batteryCapacity;

public:
    void setBatteryCapacity(int b) {
        batteryCapacity = b;
    }

    int getBatteryCapacity() {
        return batteryCapacity;
    }

    // Override displayInfo to also show battery info
    void displayInfo() override {
        Car::displayInfo(); // call base class method
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    Car car1, car2;
    ElectricCar ecar1;

    car1.setBrand("Toyota");
    car1.setModel("Camry");
    car1.setYear(2010);

    car2.setBrand("Honda");
    car2.setModel("Civic");
    car2.setYear(2018);

    cout << "\n--- Car 1 Info ---\n";
    car1.displayInfo();

    cout << "\n--- Car 2 Info ---\n";
    car2.displayInfo();

    ecar1.setBrand("Tesla");
    ecar1.setModel("Model S");
    ecar1.setYear(2022);
    ecar1.setBatteryCapacity(100);

    cout << "\n--- Electric Car Info ---\n";
    ecar1.displayInfo();

    return 0;
}