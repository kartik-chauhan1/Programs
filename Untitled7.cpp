#include <iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter the  number ";
	cin>>n;	
	for (i = 1; i<n; i++) 
	{
		n=n/10;
	}
	
	cout<<i;
}
