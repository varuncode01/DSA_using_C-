#include <iostream>

using namespace std;

int main() {
    int marks[5] = {51, 52, 39, 55, 45};
    marks[0] = 53;
    cout << marks[0] << endl;
    for (int i = 0; i < sizeof(marks)/sizeof(int); i++) {
        cout << marks[i] << endl;
    }
    int size = 5;
    int marks2[size];
    for (int i = 0; i<size ; i++) {
        cin >> marks2[i];
    }
    // Smallest
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++) {
        smallest = min(marks2[i], smallest);
    }
    cout << smallest << endl;
    // Largest
    int largest = INT_MIN;
    for (int i = 0; i < size; i++) {
        largest = max(marks2[i], largest);
    }
    cout << largest << endl;
    return 0;
}


