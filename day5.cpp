// Binary Number System
#include <iostream>
using namespace std;

// Decimal to Binary conversion
int dectobinary(int decnum){
    int ans = 0, pow = 1;  // intial ans = 0 and pow = 1 (10^0)

    while (decnum > 0)
    {
        int rem = decnum % 2;    // remainder when divided by 2
        decnum = decnum / 2;     // updating decnum when divided by 2
        
        ans = ans + (rem * pow);   // updating ans
        pow = pow * 10;            // pow is below because we want to add numbers in 10^0, 10^1, 10^2...  in forward direction
    }
    return ans;    
}

// Decimal to Binary conversion
int binarytodecimal(int binum){
    int ans = 0, pow = 1; // intial ans = 0 and pow = 1 (2^0)

    while (binum > 0)
    {
        int rem = binum % 10;    // remainder when divided by 10
        ans = ans + (rem * pow);
        
        binum = binum / 10;      // updating binum when divided by 10
        pow = pow * 2;           // pow is below because we want to add numbers in 2^0, 2^1, 2^2...  in forward direction
    }
    return ans;
}


int main() {
    // Decimal to Binary conversion
    int decnum;
    cout << "Enter a decimal number: ";
    cin >> decnum;

    cout << "Binary of " << decnum << " is " << dectobinary(decnum) << endl;

    for (int i = 11; i < 31; i++)
    {
        cout << dectobinary(i) << endl; // printing binary of first 30 numbers
    }

    // Binary to Decimal conversion
    int binum;
    cout << "Enter a binary number: ";
    cin >> binum;

    cout << "Decimal of " << binum << " is " << binarytodecimal(binum) << endl;
    
    return 0;
}