#include <iostream>
using namespace std;

int main() 
{
    int i, j;
    char alphabet;
    for (i = 5; i >= 1; i--)
    {
        alphabet = 'A'; // Reset alphabet to 'A' at the beginning of each row
        for (j = 1; j <= i; j++)
        {
            cout << alphabet << " ";
            alphabet++;
        }
        cout << "\n";             
    }
    return 0;
}

