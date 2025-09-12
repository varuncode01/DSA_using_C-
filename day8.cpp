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

    // Kadane's algorithm to find maximum sum of subarray in O(n) time complexity
    // leetcode problem: https://leetcode.com/problems/maximum-subarray/
    /*
    class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;

        for(int val: nums){
            currSum += val;
            maxSum = max(currSum,maxSum);

            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};
    */
    return 0;
}