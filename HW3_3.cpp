#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius, fahrenheit_back;
    cout << "Enter F : ";
    cin >> fahrenheit;
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    cout << "F convert to C = " << celsius << endl;
    fahrenheit_back = (celsius * (9.0 / 5.0)) + 32;
    cout << "C convert to F = " << fahrenheit_back << endl;

    return 0;
}