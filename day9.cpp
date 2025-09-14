#include <iostream>
#include <vector>
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

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int target = 21;
    vector<int> ans = pairsumbf(nums, target); //using brute force
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

    return 0;
}