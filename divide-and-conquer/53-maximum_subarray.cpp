// Problem: 53. Maximum Subarray
// URL: https://leetcode.com/problems/maximum-subarray/
// Difficulty: Medium
// Date: 21 May 2025
// Tags: Array, Divide and Conquer, Dynamic Programming, Kadane's Algorithm
// Solution Beats: 100.00%


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0], currentSum = nums[0];
        for (int i = 1; i < n; i++) {
            currentSum = max(currentSum + nums[i], nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSubArraySum = sol.maxSubArray(nums);
    cout << "Maximum subarray sum: " << maxSubArraySum << endl;
    return 0;
}