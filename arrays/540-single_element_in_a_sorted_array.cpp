// Problem: 540. Single Element in a Sorted Array
// URL: https://leetcode.com/problems/single-element-in-a-sorted-array/
// Difficulty: Medium
// Date: 4 June 2025
// Tags: Array, Binary Search
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
            int left = 0, right = nums.size() - 1;
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (mid % 2 == 0) {
                    if (nums[mid] == nums[mid + 1]) left = mid + 2;
                    else right = mid;
                } else {
                    if (nums[mid] == nums[mid - 1]) left = mid + 1;
                    else right = mid;
                }
            }
            return nums[left];
        }
    };

    int main() {
        Solution solution;
        vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
        int result = solution.singleNonDuplicate(nums);
        cout << "The single non-duplicate element is: " << result << endl;
        return 0;
    }
