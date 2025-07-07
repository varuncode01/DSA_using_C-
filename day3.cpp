//
// Created by hp on 07-07-2025.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"volvo", "BMW", "ford", "mazda"};
    for (string car : cars) {
        cout << car << endl;
    }
    cout << cars.front()<< endl;
    cout << cars.back()<< endl;
    cars.at(0) = "Opel";
    cout << cars[0] << endl;
    cars.push_back("Tesla");
    cout << endl;
    for (string car : cars) {
        cout << car << endl;
    }
    cout << cars.size()<< endl;
    cars.pop_back();
    for (string car : cars) {
        cout << car << endl;
    }
    cars.empty();
    for (string car : cars) {
        cout << car << endl;
    }
    return 0;
}