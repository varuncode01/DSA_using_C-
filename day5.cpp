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

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binarynum = dectobinary(n);
    cout << "Binary of " << n << " is " << binarynum << endl;

    for (int i = 0; i < 31; i++)
    {
        cout << dectobinary(i) << endl; // printing binary of first 30 numbers
    }

    return 0;
}