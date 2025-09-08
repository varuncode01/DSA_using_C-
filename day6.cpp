#include <iostream>
using namespace std;

int main() {
    int arr1[10] = {2,3,4,5,1,6,7,8,9,10};
    int arr2[] = {11,12,13,14,15,16,17,18,19,20}; // automatic size is according to the number of elements
    int arr3[10]; // uninitialized/empty array
    // int arr4[]; // empty array which don't have specific size mentioned is not allowed
    cout << "Size of arr1: " << sizeof(arr1) << " bytes" << endl;
    cout << "Size of arr1: " << sizeof(arr2) / sizeof(int) << " elements" << endl;

    int size = sizeof(arr1) / sizeof(int);

    // Smallest and largest element of an array
    int smallest = arr1[0];
    int largest = arr1[0];

    for (int i = 0; i < size; i++)
    {
        smallest = min(smallest, arr1[i]);
        largest = max(largest, arr1[i]);
    }
    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
    return 0;
}