// Problem: 33. Search in Rotated Sorted Array
// URL: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Difficulty: Medium
// Date: 6 June 2025
// Tags: Array, Binary Search
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int low = 0, high = nums.size() - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target) return mid;
                else if (nums[low] <= nums[mid]) {
                    if (target >= nums[low] && target <= nums[mid]) high = mid;
                    else low = mid + 1;
                } else {
                    if (target >= nums[mid] && target <= nums[high]) low = mid + 1;
                    else high = mid;
                }
            }
            return -1;
        }
    };

    int main() {
        Solution sol;
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        int target = 0;
        cout << "Index of target " << target << ": " << sol.search(nums, target) << endl; // Output: 4
        return 0;
    }