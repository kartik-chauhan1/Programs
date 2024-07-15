#include <iostream>
using namespace std;
int main() {
    int day;

    cout << "Enter day number : ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Sunday" ;
            cout << " Happy Day ";
            break;
        case 2:
            cout << "Monday" ;
            cout << "Happy Day " ;
            break;
        case 3:
            cout << "Tuesday" ;
            cout << "Happy Day " ;
            break;
        case 4:
            cout << "Wednesday" ;
            cout << "Happy Day " ;
            break;
        case 5:
            cout << "Thursday" ;
            cout << "Happy Day " ;
            break;
        case 6:
            cout << "Friday" ;
            cout << "Weekend is coming" ;
            break;
        case 7:
            cout << "Saturday" ;
            cout << "Enjoy your weekend";
            break;
        default:
            cout << "Invalid day number" ;
    }
}