#include <iostream>
using namespace std;
int main()
{
    int i,j ,a,b,c;
    cout<<"Enter the number a and b";
    cin>>a>>b;
    for (i=a;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
         c=1;
         if(i%j==0)
         {
            c=0;
            break;
         }
        }
        if(c==1)
        cout<<" "<<i;
    }
}