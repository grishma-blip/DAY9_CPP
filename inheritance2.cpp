#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    { // Constructor
        cout << "This is Vehicle" << endl;
    }

    void display()
    { // Display function in Vehicle class
        cout << "Displaying Vehicle details" << endl;
    }
};

class Car : public Vehicle
{
public:
    void display()
    { // Overriding display function in Car class
        cout << "Displaying Car details" << endl;
    }
};

int main()
{
    Car obj;
    obj.display(); // Calls the display function of the Car class
    return 0;
}