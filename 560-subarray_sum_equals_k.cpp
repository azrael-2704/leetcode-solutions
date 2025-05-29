// Problem: 560. Subarray Sum Equals K
// URL: https://leetcode.com/problems/subarray-sum-equals-k/
// Difficulty: Medium
// Date: 27 May 2025
// Tags: Array, Hash Table, Prefix Sum
// Solution Beats: 96.92%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> index;
        index[0] = 1;
        int n = nums.size(), answer = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (index.find(sum - k) != index.end()) answer += index[sum - k];
            index[sum]++;
        }
        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1};
    int k = 2;

    int result = sol.subarraySum(nums, k);
    cout << "Number of subarrays with sum equal to " << k << ": " << result << endl;

    return 0;
}