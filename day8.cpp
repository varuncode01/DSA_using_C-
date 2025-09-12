#include <iostream>
#include <vector>
using namespace std;

// subarray = n*(n+1)/2, n = size of array

int main(){
    vector <int> arr = {1,2,3,4,5};
    // subarray
    for (int st = 0; st < arr.size(); st++)
    {
        for (int end = 0; end < arr.size(); end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}