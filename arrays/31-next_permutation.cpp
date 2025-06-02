// Problem: 34. Next Permutation
// URL: https://leetcode.com/problems/next-permutation/
// Difficulty: Medium
// Date: 26 May 2025
// Tags: Array, Two Pointer
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 1, j = nums.size() - 1;
        while (i > 0 && nums[i] <= nums[i - 1]) i--;
        if (i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }
        while (j >= i && nums[j] <= nums[i - 1]) j--;
        swap(nums[i - 1], nums[j]);
        reverse(nums.begin() + i, nums.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    sol.nextPermutation(nums);
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}