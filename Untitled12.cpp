#include <iostream>
using namespace std;
int main() 
{

    int n, a= -1, b = 1, c,i,d;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (i = 1; i<=n;  i++) 
    {
    	c=a+b;
    	a=b;
    	b=c;
    	if(n==c)
    	  d++;
    }
    if(d==1)
    {
      cout<<"in Fibonacci Series";	
	}
	else{
		cout<<"not in Fibonacci Series";
	}
}
    
