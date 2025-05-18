// Problem: 189. Rotate Array
// URL: https://leetcode.com/problems/rotate-array/
// Difficulty: Medium
// Date: 18 May 2025
// Tags: Array, Two Pointer
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        if (k == 0) return;

        int count = 0;
        for (int start = 0; count < n; start++) {
            int current = start;
            int prev = nums[start];

            do {
                int next = (current + k) % n;
                swap(nums[next], prev);
                current = next;
                count++;
            } while (start != current);
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    Solution sol;
    sol.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}