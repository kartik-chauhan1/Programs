#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value A and B ";
    cin>>a >>b;
    a=a+b-(b=a);
    cout<<"Swaping "<<a<<" "<<b;
    
}
