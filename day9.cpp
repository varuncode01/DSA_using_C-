#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Pairsum
vector<int> pairsumbf(vector<int> nums, int target){               // Brute Force Approach but O(n^2) time complexity
    vector<int> ans;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
            }
            
        }
    }
    return ans;
}

// Optimal Approach using two pointer technique
// Time Complexity: O(n)
vector<int> pairsumopt(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0;
    int j = n - 1; // J = n-1 because index starts from 0

    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }
        else if (pairsum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
    return ans;    
}


// Majority Element
// Brute Force Approach
// Time Complexity: O(n^2)
int majorityElementbf(vector<int> nums){
    int n = nums.size();
    int majority = n/2;
    int ans;
    for (int val: nums)
    {
        int frequency = 0;
        for (int ele: nums)
        {
            if (ele == val){
                frequency++;
            }
        }
        if (frequency > majority){
            return val;
        }
    }
    return -1;
}

// Majority Element
// Optimal Approach(using sorting)
// Time Complexity: O(n log n)
int MajorityElementOp(vector<int> arr){
    
    sort(arr.begin(), arr.end()); // Sorting array
    
    int n = arr.size();
    
    int frequency = 1, ans = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i-1]){
            frequency++;
        }
        else{
            frequency = 0;
            ans = arr[i];
        }
        if(frequency > n/2){
            return ans;
        }
    }
    return -1;
}

int main(){
    // Pairsum
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int target = 21;
    
    //using brute force
    vector<int> ans = pairsumbf(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    // using 2 pointer menthod
    vector<int> ans2 = pairsumopt(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    // Majority Element
    vector<int> nums2 = {2,2,1,1,1,2,2,3,1,4,3,3,4,4,4,4,5,6,7,8,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
    cout << "\nMajority Element using brute force: " << majorityElementbf(nums2) << endl;

    cout << "Majority Element using optimal approach: " << MajorityElementOp(nums2) << endl;

    return 0;
}