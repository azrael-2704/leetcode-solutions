// Problem: 153. Finding Minimum in Rotated Sorted Array
// URL: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Difficulty: Medium
// Date: 6 June 2025
// Tags: Array, Binary Search
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int low = 0, high = nums.size() - 1, minEle = nums[0];
            while (low < high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] > nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }
            return nums[low];
        }
    };

    int main() {
        Solution sol;
        vector<int> nums = {3, 4, 5, 1, 2};
        cout << "Minimum element in rotated sorted array: " << sol.findMin(nums) << endl; // Output: 1
        return 0;
    }