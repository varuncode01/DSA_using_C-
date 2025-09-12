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

    // maximum sum of subarray using brute force
    vector <int> arr2 = {3, -4, 2, -3, -1, 7, -5};
    int maxsum = INT_MIN;
    for (int st = 0; st < arr2.size(); st++)
    {
        int currsum = 0;
        for (int end = st; end < arr2.size(); end++)
        {
            currsum = currsum + arr2[end];
            maxsum = max(maxsum, currsum);
        }
    }
    cout << "Maximum sum of subarray: " << maxsum << endl;

    return 0;
}