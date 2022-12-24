// Decimal to Binary

#include <iostream>
#include <math.h>
using namespace std;

void decimalToBinary(int decimal)
{
    int binary[32];
    int i = 0;

    cout << "Binary Number : ";
    if (decimal == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        while (decimal > 0)
        {
            binary[i] = decimal % 2;
            decimal /= 2;
            i++;
        }

        
        for (int j = i - 1; j >= 0; j--)
        {
            cout << binary[j];
        }
    }
}

int main()
{
    cout << "Decimal Number : ";
    int decimalNumber;
    cin >> decimalNumber;

    decimalToBinary(decimalNumber);
}
