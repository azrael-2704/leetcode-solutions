// Problem: 152. Maximum Product Subarray
// URL: https://leetcode.com/problems/maximum-product-subarray/
// Difficulty: Medium
// Date: 29 May 2025
// Tags: Array, Dynamic Programming
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int n = nums.size(), answer = nums[0];
            int maxProduct = nums[0], minProduct = nums[0];
            for (int i = 1; i < n; i++) {
                int temp = maxProduct;
                maxProduct = max({nums[i], nums[i] * maxProduct, nums[i] * minProduct});
                minProduct = min({nums[i], nums[i] * temp, nums[i] * minProduct});
                answer = max(answer, maxProduct);
            }
            return answer;
        }
    };

    int main() {
        vector<int> nums = {2, 3, -2, 4};
        Solution sol;
        int result = sol.maxProduct(nums);

        cout << "Maximum product of a subarray: " << result << "\n";

        return 0;
    }