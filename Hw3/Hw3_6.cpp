#include <iostream>
using namespace std;

int main() {
    int start_km, end_km;
    int hours, minutes, seconds;
    
    int distance;
    double total_hours, avg_velocity;

    cout << "Data inputs are integer!." << endl;
    cout << "=====================================================================" << endl;
    cout << "Enter start kilometer : ";
    cin >> start_km;
    cout << "Enter end kilometer : ";
    cin >> end_km;
    cout << "Enter time used (hour minute second) : ";
    cin >> hours >> minutes >> seconds;
    cout << "=====================================================================" << endl;
    distance = end_km - start_km;
    total_hours = hours + (minutes / 60.0) + (seconds / 3600.0);
    avg_velocity = distance / total_hours;
    cout << "Car traveled " << distance << " kilometers in " 
         << hours << " hrs " << minutes << " min " << seconds << " sec." << endl;
         
    cout << "Average velocity was " << avg_velocity << " kph." << endl;
    return 0;
}