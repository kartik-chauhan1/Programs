#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (num > 0) {
        // remainder contains the last digit
        remainder = num % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        num /= 10;
    }

    if (result == originalNum)
        cout  << " is an Armstrong number.";
    else
        cout << " is not an Armstrong number.";

}