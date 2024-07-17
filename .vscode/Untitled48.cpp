#include <iostream>
using namespace std;
int E(int n) {
    if (n % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;

   int a = E(i);
   if(a==1) 
    cout<<"even";
    else{
        cout<<"odd";
    }

}
