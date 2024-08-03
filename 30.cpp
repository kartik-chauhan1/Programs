// Compound Interest Calculator
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, rate, time, ci;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in %): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    ci = principal * pow((1 + rate/100), time);

    cout << "Compound Interest: " << ci << endl;

    return 0;
}