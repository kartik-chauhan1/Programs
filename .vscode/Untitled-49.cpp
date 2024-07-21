#include <iostream>
using namespace std;
int leap(int year)
{
    if(year%4==0 && (year%100==0 || year%400==0))
	{
		cout<<"leap year";	
	}
	else 
	{
		cout<<"not leap year";
	}
}
int main()
{
    int y;
    cout<<"Enter the year :";
    cin>>y;
    leap(y);

}