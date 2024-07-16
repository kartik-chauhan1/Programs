#include <iostream>

using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks > 100 || marks < 0) {
        cout << "Invalid marks entered." << endl;
         
    }

    switch (marks/10 ) {
        case 9:
            cout << "Grade: A+" << endl;
            break;
        case 8:
            cout << "Grade: A" << endl;
         break;
        case 7:
            cout << "Grade: B" << endl;
            break;
        case 6:
            cout << "Grade: C" << endl;
            break;
        case 5:
            cout << "Grade: D" << endl;
            break;
        default:
            cout << "Grade: F" << endl;
    }

    return 0;
}