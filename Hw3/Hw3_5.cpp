#include <iostream>
using namespace std;

int main() {
    int binaryInput;
    int d1, d2, d3, d4;
    int decimalValue;
    cout << "Enter binary number : ";
    cin >> binaryInput;
    d1 = binaryInput / 1000;          
    d2 = (binaryInput / 100) % 10;    
    d3 = (binaryInput / 10) % 10;     
    d4 = binaryInput % 10;            
    decimalValue = (d1 * 8) + (d2 * 4) + (d3 * 2) + (d4 * 1);
    cout << "Decimal value of " << binaryInput << " = " << decimalValue << endl;
    return 0;
}