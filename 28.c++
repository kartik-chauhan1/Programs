//largest number
#include <iostream>
using namespace std;
int main()
{
    int a ,b,c;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the Secound number"<<endl;
    cin>>b;
    cout<<"Enter the third number"<<endl;
    cin>>c;
    if (a>b && b>c)
      cout<<a;
    else if (b>a && b>c)
        cout<<b;
    else 
        cout<<c; 

}