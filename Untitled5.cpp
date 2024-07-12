#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter the  number ";
	cin>>n;	
	for (i = 0; i<=n; i++) 
	{
		sum=sum+(i*i*i);
	}
	cout<<sum;
}
    
