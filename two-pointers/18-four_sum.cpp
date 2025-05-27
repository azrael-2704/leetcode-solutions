// Problem: 18. Four Sum
// URL: https://leetcode.com/problems/4sum/
// Difficulty: Medium
// Date: 27 May 2025
// Tags: Array, Two Pointer, Sorting
// Solution Beats: 30.32%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1, right = n - 1;
                while (left < right) {
                    long long total = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (total == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        left++;
                        right--;
                    } else if (total < target) left++;
                    else right--;
                }
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    Solution sol;
    vector<vector<int>> result = sol.fourSum(nums, target);

    cout << "Quadruplets with sum " << target << ":\n";
    for (const auto& quadruplet : result) {
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}