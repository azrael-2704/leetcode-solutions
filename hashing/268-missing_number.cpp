// Problem: 268. Missing Number
// URL: https://leetcode.com/problems/missing-number/
// Difficulty: Easy
// Date: 20 May 2025
// Tags: Array, Hash Table, Bit Manipulation, Math
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> flag(n+1, 0);
        for (int i = 0; i < n; i++) {
            flag[nums[i]] = 1;
        }
        auto it = find(flag.begin(), flag.end(), 0);
        return it - flag.begin();
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1};
    int missing = sol.missingNumber(nums);
    cout << "Missing number: " << missing << endl; // Output: 2
    return 0;
}