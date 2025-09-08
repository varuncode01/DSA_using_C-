#include <iostream>
using namespace std;

int main() {
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {11,12,13,14,15,16,17,18,19,20}; // automatic size is according to the number of elements
    int arr3[10]; // uninitialized/empty array
    // int arr4[]; // empty array which don't have specific size mentioned is not allowed
    cout << "Size of arr1: " << sizeof(arr1) << " bytes" << endl;
    cout << "Size of arr1: " << sizeof(arr2) / sizeof(int) << " elements" << endl;
    return 0;
}