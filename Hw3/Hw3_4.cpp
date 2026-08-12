#include <iostream>
using namespace std;

int main() {
    int number;
    int digit1, digit2, digit3, digit4;
    cout << "Enter number : ";
    cin >> number;
    digit1 = number / 1000;
    digit2 = (number / 10) % 10;
    digit3 = (number / 10) % 10; 
    digit4 = number % 10;
    digit1 = number / 1000;          
    digit2 = (number / 100) % 10;    
    digit3 = (number / 10) % 10;     
    digit4 = number % 10;            
    cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << endl;

    return 0;
}