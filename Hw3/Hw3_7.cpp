#include <iostream>
#include <string>

using namespace std;

int main() {
    double ticketPrice;
    double height;
    string category;
    double totalPrice;
    cout << "Enter Ticket Price : ";
    cin >> ticketPrice;
    cout << "Enter Height : ";
    cin >> height;
    if (height > 150) {
        category = "adult";
        totalPrice = ticketPrice;       
    } else {
        category = "kid";
        totalPrice = ticketPrice * 0.5;   
    }
    cout << "You are " << category << "." << endl;
    cout << "Total Price : " << totalPrice << endl;
    return 0;
}