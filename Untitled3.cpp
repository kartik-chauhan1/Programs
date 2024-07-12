#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter the number ";
	cin>>n;	
	for (i = 1; i<=n*2; i++) 
	{
		if(i&1)
		{
			sum=sum+i;
		}
	}
	cout<<sum;
}
    
