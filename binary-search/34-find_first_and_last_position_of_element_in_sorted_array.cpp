// Problem: 34. Find First and Last Position of Element in Sorted Array
// URL: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Difficulty: Medium
// Date: 2 June 2025
// Tags: Array, Binary Search
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int first = -1, last = -1;
            int low = 0, high = nums.size() - 1;
    
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target) {
                    first = mid;
                    high = mid - 1;
                } else if (nums[mid] < target) low = mid + 1;
                else high = mid - 1;
            }
    
            low = 0;
            high = nums.size() - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target) {
                    last = mid;
                    low = mid + 1;
                } else if (nums[mid] < target) low = mid + 1;
                else high = mid - 1;
            }
    
            return {first, last};
        }
    };

    int main() {
        Solution solution;
        vector<int> nums = {5, 7, 7, 8, 8, 10};
        int target = 8;
        vector<int> result = solution.searchRange(nums, target);
        cout << "First and last position of " << target << ": [" << result[0] << ", " << result[1] << "]" << endl;
        return 0;
    }