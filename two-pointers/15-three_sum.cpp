// Problem: 15. Three Sum
// URL: https://leetcode.com/problems/3sum/
// Difficulty: Medium
// Date: 17 May 2025
// Tags: Array, Two Pointer, Sorting
// Solution Beats: 54.41%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = n - 1;

            while (left < right) {
                int total = nums[i] + nums[left] + nums[right];
                if (total == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (total < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return result;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(nums);

    cout << "Triplets with sum 0:\n";
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
