#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c,n,i;
    cout<<"Enter the value :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
         a=b;
         b=c;
        
    }

}

