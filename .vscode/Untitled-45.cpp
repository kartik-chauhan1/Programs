#include<iostream>
using namespace std;
int SI(int P,int T, int R){
    int S;
    S=P*T*R/100;
    cout<<S;
}
int main(){
    int a,b,c;
    cout<<"Enter the value";
    cin>>a>>b>>c;
    SI(a,b,c);

}