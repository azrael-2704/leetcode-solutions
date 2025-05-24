// Problem: 2149. Rearrange Array Elements by Sign
// URL: https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Difficulty: Medium
// Date: 24 May 2025
// Tags: Array, Two Pointer, Simulation
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(), even = 0, odd = 1;
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                result[even] = nums[i];
                even += 2;
            } else {
                result[odd] = nums[i];
                odd += 2;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = sol.rearrangeArray(nums);
    cout << "Rearranged array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}