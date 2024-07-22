#include <iostream>
using namespace std;
int main() 
{

    int n, a= -1, b =1, c,i;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (i = 1; i<=n; i++) 
    {
    	c=a+b;
    	a=b;
    	b=c;
    	cout<<c<<",";
    }
}
    
