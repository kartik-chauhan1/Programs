#include <iostream>
using namespace std;
int odd(int n) {
    int f=1;
    for(int i=1; i<=n; i++) 
         f=f*i;
     return f;
        
    
}
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int result=odd(n);
    cout<<result;
}