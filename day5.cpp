// Binary Number System
#include <iostream>
using namespace std;

int dectobinary(int decnum){
    int ans = 0, pow = 1;

    while (decnum > 0)
    {
        int rem = decnum % 2;
        decnum = decnum / 2;
        
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;    
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binarynum = dectobinary(n);
    cout << "Binary of " << n << " is " << binarynum << endl;

    return 0;
}