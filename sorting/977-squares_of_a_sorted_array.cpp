// Problem: 977. Squares of a Sorted Array
// URL: https://leetcode.com/problems/squares-of-a-sorted-array/
// Difficulty: Easy
// Date: 29 May 2025
// Tags: Array, Two Pointer, Sorting
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int n = nums.size(), left = 0, right = n - 1;
            vector<int> result(n);
            n--;
            while (left <= right) {
                int leftSquare = nums[left] * nums[left], rightSquare = nums[right] * nums[right];
                if (leftSquare > rightSquare) {
                    result[n] = leftSquare;
                    left++;
                    n--;
                } else {
                    result[n] = rightSquare;
                    right--;
                    n--;
                }
            }
            return result;
        }
    };

    int main() {
        vector<int> nums = {-4, -1, 0, 3, 10};
        Solution sol;
        vector<int> result = sol.sortedSquares(nums);

        cout << "Sorted squares of the array:\n";
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";

        return 0;
    }