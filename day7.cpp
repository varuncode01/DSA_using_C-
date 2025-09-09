#include <iostream>
#include <vector>
using namespace std;

// Vector's size is dynamic unlike arrays which have fixed size
// Vector is a template class in C++ STL (Standard Template Library)
int main() {
    // Vector declaration
    vector<int> vector_name; // empty vector 
    cout << "Size of vector: " << vector_name.size() << endl;
    // cout << vector_name[0] << endl; // error as vector is empty
    vector<int> vec1 = {1,2,3,4,5}; // vector of size 5
    vector<int> vec2(5); // vector of size 5 with all elements initialized to 0
    vector<int> vec3(5, 10); // vector of size 5 with all elements initialized to 10
    cout << "Size of vec1: " << vec1.size() << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << vec1[i] << " ";
    }
    cout << "\nSize of vec2: " << vec2.size() << endl;
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }
    cout << "\nSize of vec3: " << vec3.size() << endl;
    for (int i : vec3)
    {
        cout << vec3[i] << " ";
    }
    
}