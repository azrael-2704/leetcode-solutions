// Problem: 485. Max Consecutive Ones
// URL: https://leetcode.com/problems/max-consecutive-ones/
// Difficulty: Easy
// Date: 20 May 2025
// Tags: Array
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /*int n = nums.size(), maxOnes = 0;
        int left = 0, right = 0;
        while (right < n) {
            if (nums[left] == 1) {
                while (right < n && nums[right] == 1) right++;
                maxOnes = max(maxOnes, right - left);
                left = right;
            } else {
                left++;
                right = left;
            }
        }
        return maxOnes;*/

        int maxOnes = 0, ones = 0;
        for (auto num : nums) {
            ones = (num == 1) ? ones + 1 : 0;
            maxOnes = max(maxOnes, ones);
        }
        return maxOnes;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int maxConsecutiveOnes = sol.findMaxConsecutiveOnes(nums);
    cout << "Max consecutive ones: " << maxConsecutiveOnes << endl; // Output: 3
    return 0;
}