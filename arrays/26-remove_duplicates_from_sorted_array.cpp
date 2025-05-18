// Problem: 26. Remove Duplicates from Sorted Array
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Difficulty: Easy
// Date: 18 May 2025
// Tags: Array, Two Pointer
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0, right = 1, n = nums.size(), ctr = 0;

        while (right != n) {
            if (nums[left] == nums[right]) right++;
            else {
                nums[left + 1] = nums[right] ;
                left++;
            }
        }
        return left+1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2};
    int newLength = sol.removeDuplicates(nums);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}