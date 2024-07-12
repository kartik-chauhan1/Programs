#include<iostream>
using namespace std;
int main()
{
	int i,n,c=0,b=0;
	cout<<"Enter the  number ";
	cin>>n;
	for (i = 2; i<n; i++) 
	{
		if( n%i==0)
		{
			c++;
			break;
		}
		else
		{
			b++;
		}
		    
	}
	 if(c==1)
	 { 
	   cout<<"not a prime number ";
	 }
	 else
	 {
	 	cout<<"prime number";
	 }
}
