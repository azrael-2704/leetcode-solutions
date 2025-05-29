// Problem: 88. Merge Sorted Array
// URL: https://leetcode.com/problems/merge-sorted-array/
// Difficulty: Easy
// Date: 30 May 2025
// Tags: Array, Two Pointers, Sorting
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int p1 = m - 1, p2 = n - 1, p = m + n - 1;
            while (p1 >= 0 && p2 >= 0) {
                if (nums1[p1] > nums2[p2]) nums1[p--] = nums1[p1--];
                else nums1[p--] = nums2[p2--];
            }
            while (p2 >= 0) {
                nums1[p--] = nums2[p2--];
            }
        }
    };

    int main() {
        Solution sol;
        vector<int> nums1 = {1, 2, 3, 0, 0, 0};
        vector<int> nums2 = {2, 5, 6};
        int m = 3, n = 3;
        sol.merge(nums1, m, nums2, n);
        for (int num : nums1) {
            cout << num << " ";
        }
        cout << endl; // Output: 1 2 2 3 5 6
        return 0;
    }