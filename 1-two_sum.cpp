// Problem: 1. Two Sum
// URL: https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Date: 17 May 2025
// Tags: Array, Hash Table
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            int left = target - nums[i];
            if (mpp.count(left)) {
                return {mpp[left], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices found: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
