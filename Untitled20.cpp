#include<iostream>
using namespace std;
void marks();
int main()
{
    int Hin,eng,mat,sci,soc,t,avg;
    cout<<"\nEnter the Marks:";
    cin>>Hin>>eng>>mat>>sci>>soc;
    t=Hin+eng+mat+sci+soc;
    avg=t/5;
    cout<<"Total Marks:"<<t;
    cout<<"Average:"<<avg;
    if(t>230)
    {
        if(t>=480)
        {
            cout<<"\nGrade:A";
        }
        else if(t>400&&t<480)
        {
            cout<<"\nGrade:B";
        }
        else if(t<400)
        {
            cout<<"\nGrade:C";
        }
        cout<<"\nPass";
    }
    else
    {
        cout<<"\nFail";
    }
}
