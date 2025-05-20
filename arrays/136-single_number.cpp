// Problem: 136. Single Number
// URL: https://leetcode.com/problems/single-number/
// Difficulty: Easy
// Date: 20 May 2025
// Tags: Array, Bit Manipulation
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorValue = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            xorValue  = xorValue ^ nums[i];
        }
        return xorValue;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1};
    int singleNum = sol.singleNumber(nums);
    cout << "Single number: " << singleNum << endl;
    return 0;
}