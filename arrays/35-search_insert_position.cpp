// Problem: 35. Search Insert Position
// URL: https://leetcode.com/problems/search-insert-position/
// Difficulty: Easy
// Date: 1 June 2025
// Tags: Array, Binary Search
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int low = 0, high = nums.size() - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (nums[mid] == target) return mid;
                else if (nums[mid] > target) high = mid - 1;
                else low = mid + 1;
            }
            return high + 1;
        }
    };

    int main() {
        Solution solution;
        vector<int> nums = {1, 3, 5, 6};
        int target = 5;
        int result = solution.searchInsert(nums, target);
        cout << "The target " << target << " should be inserted at index: " << result << endl;
        return 0;
    }