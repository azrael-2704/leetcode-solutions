// Problem: 16. Three Sum Closest
// URL: https://leetcode.com/problems/3sum-closest/
// Difficulty: Medium
// Date: 18 May 2025
// Tags: Array, Two Pointer, Sorting
// Solution Beats: 95.54%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n; i++) {
            int curr = nums[i];
            int left = i + 1, right = n - 1;

            while (left < right) {
                int total = curr + nums[left] + nums[right];

                if (abs(closest - target) > abs(total - target)) {
                    closest = total;
                }

                if (total < target) {
                    left++;
                } else if (total > target) {
                    right--;
                } else {
                    return total;
                }
            }
        }

        return closest;
    }
};

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    Solution sol;
    int result = sol.threeSumClosest(nums, target);
    cout << "Closest sum to target " << target << " is: " << result << endl;

    return 0;
}
