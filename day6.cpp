#include <iostream>
using namespace std;

// pass by reference
void changeArr(int arr[], int size) {
    cout << "In Function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2*arr[i];
    }
}

// Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

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

    // pass by reference
    int sizearr2 = sizeof(arr2) / sizeof(int);
    changeArr(arr2, sizearr2);

    cout << "In Main Function\n";
    for (int i = 0; i < sizearr2; i++)
    {
        cout << arr2[i] << "\n";           // changed values of original array in main function
    }
    
    // Linear Search
    int target;
    cout << "Enter the element to be searched: ";
    cin >> target;
    int ans = linearSearch(arr1, size, target);
    if (ans != -1) {
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}