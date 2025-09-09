#include <iostream>
#include <vector>
using namespace std;

// Vector's size is dynamic unlike arrays which have fixed size
// Vector is a template class in C++ STL (Standard Template Library)
int main() {
    vector<int> vector_name; // empty vector 
    cout << "Size of vector: " << vector_name.size() << endl;
    // cout << vector_name[0] << endl; // error as vector is empty
}