// Problem: 128. Longest Consecutive Sequence
// URL: https://leetcode.com/problems/longest-consecutive-sequence/
// Difficulty: Medium
// Date: 26 May 2025
// Tags: Array, Hash Table, Union Find
// Solution Beats: 98.89%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            int n = nums.size(), ctr = 1, ans = 0;
            if (n == 0 || n == 1) return n;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < n-1; i++) {
                if (nums[i] == nums[i + 1]) continue;
                else if (nums[i] == nums[i + 1] - 1) {
                    ctr++;
                } else {
                    ans = max(ctr, ans);
                    ctr = 1;
                }
            }
            return max(ans, ctr);
        }
    };

int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = sol.longestConsecutive(nums);
    cout << "Longest consecutive sequence length: " << result << endl;
    return 0;
}