#include <iostream>
using namespace std;
int main()
{
	int i,n,r;
	cout<<"Enter the  number ";
	cin>>n;	
	for (i=1; i<=n;i++)
	{
	  r=n%10;
	  cout<<r;
	n=n/10;	
	}
	cout<<n;
}
