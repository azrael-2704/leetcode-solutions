// Problem: 11. Container With Most Water
// URL: https://leetcode.com/problems/container-with-most-water/
// Difficulty: Medium
// Date: 17 May 2025
// Tags: Array, Two Pointers, Greedy
// Solution Beats: 100.00%

#include <bits/stdc++.h>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int volume = 0;

        while (left < right) {
            volume = std::max(volume, (right - left) * std::min(height[left], height[right]));
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return volume;
    }
};

int main() {
    std::vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution solution;
    int result = solution.maxArea(height);

    std::cout << "Maximum water area: " << result << std::endl;
    return 0;
}