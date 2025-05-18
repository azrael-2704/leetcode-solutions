// Problem: 1752. Check if Array is Sorted and Rotated
// URL: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Difficulty: Easy
// Date: 18 May 2025
// Tags: Array
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool check(vector<int>& nums) {
        int n = nums.size(), ctr = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) ctr++;
        }
        return ctr <= 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 4, 5, 1, 2};
    bool result = sol.check(nums);
    cout << (result ? "Array is sorted and rotated" : "Array is not sorted and rotated") << endl;

    return 0;
}
