#include <iostream>
using namespace std;
int main() {
    int num, originalNum, remainder, result = 0;

       for(num=1;num<1000;num++)
       {
        int e=num;
        result = 0;
         while (e > 0) {
        remainder = e % 10;
        result += remainder * remainder * remainder;
        e /= 10;
    }
      if(result==num)
      {
        cout<<" "<<result;
      }

  }
}