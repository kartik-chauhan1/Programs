#include <iostream>
using namespace std;
int odd(int n) {
    for(int i = 1; i <= n; ++i) {
    if(i & 1) {
     cout << i << " ";
        }
    }
}
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    odd(n);
}