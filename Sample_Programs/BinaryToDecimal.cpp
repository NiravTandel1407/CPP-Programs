#include <iostream>
#include <math.h>
using namespace std;

void BinaryToDecimal(long long int binaryNumber){
    int decimal = 0;
    int i = 0;
    while(binaryNumber > 0){

        decimal = decimal + ((binaryNumber%10) * pow(2,i++));
        binaryNumber /= 10;
    }
    cout << "Decimal Number : " << decimal << endl;
}

int main(){
    cout << "Binary Number : " ;
    long long int binaryNumber;
    cin >> binaryNumber; 
    BinaryToDecimal(binaryNumber);

}