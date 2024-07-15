#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Menu:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Sum: " << result ;
            break;
        case 2:
            result = num1 - num2;
            cout << "Subtract" << result ;
            break;
        case 3:
            result = num1 * num2;
            cout << "Product: " << result ;
            break;
        case 4:
                result = num1 / num2;
                cout << "Divide" << result ;
            break;
        default:
            cout << "Invalid choice\n";
    }

    return 0;
}