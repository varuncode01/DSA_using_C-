//
// Created by hp on 19-07-2025.
//
#include <iostream>
using namespace std;

void square_pattern(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void star_square_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void star_triangle_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    square_pattern(n);
    cout << endl;
    star_square_pattern(n);
    cout << endl;
    star_triangle_pattern(n);
    return 0;
}
