// Problem: 704. Binary Search
// URL: https://leetcode.com/problems/binary-search/
// Difficulty: Easy
// Date: 31 May 2025
// Tags: Array, Binary Search
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            int left = 0, right = n - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums[left] == target) return left;
                if (nums[right] == target) return right;
                if (nums[mid] == target) return mid;
                else if (nums[mid] > target) right = mid - 1;
                else left = mid + 1;
            }
            return -1;
        }
    };

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int result = sol.search(nums, target);
    cout << "Index of target " << target << ": " << result << endl; // Output: Index of target 9: 4
    return 0;
}