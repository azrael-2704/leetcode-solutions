// Problem: 493. Reverse Pairs
// URL: https://leetcode.com/problems/maximum-product-subarray/
// Difficulty: Hard
// Date: 30 May 2025
// Tags: Array, Binary Search, Divide and Conquer, Segment Tree, Binary Indexed Tree, Merge Sort, Ordered Set
// Solution Beats: 62.07%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int mergeAndCount(vector<int>&nums, int left, int mid, int right) {
            int count = 0, j = mid + 1;
            for (int i = left; i <= mid; i++) {
                while (j <= right && (long long)nums[i] > 2LL * nums[j]) j++;
                count += j - (mid + 1);
            }
            vector<int> temp;
            int i = left;
            j = mid + 1;
            while (i <= mid && j <= right) {
                if (nums[i] < nums[j]) temp.push_back(nums[i++]);
                else temp.push_back(nums[j++]);
            }
            while (i <= mid) temp.push_back(nums[i++]);
            while (j <= right) temp.push_back(nums[j++]);
            for (int k = left; k <= right; k++) nums[k] = temp[k - left];
            return count;
        }
    
        int mergeSort(vector<int>& nums, int left, int right) {
            if (left >= right) return 0;
            int count = 0;
            int mid = left + (right - left) / 2;
            count += mergeSort(nums, left, mid);
            count += mergeSort(nums, mid + 1, right);
            count += mergeAndCount(nums, left, mid, right);
            return count;
        }
    
        int reversePairs(vector<int>& nums) {
            int count = mergeSort(nums, 0, nums.size() - 1);
            return count;
        }
    };

    int main() {
        Solution sol;
        vector<int> nums = {1, 3, 2, 3, 1};
        int result = sol.reversePairs(nums);
        cout << "Number of reverse pairs: " << result << endl; // Output: 2
        return 0;
    }