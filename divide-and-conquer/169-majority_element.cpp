// Problem: 169. Majority Element
// URL: https://leetcode.com/problems/majority-element/
// Difficulty: Easy
// Date: 21 May 2025
// Tags: Array, Hash Table, Divide and Conquer, Sorting, Counting, Boyer-Moore Voting Algorithm
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*unordered_map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        int maxEle = 0, res;
        for (auto ele : mpp) {
            if (ele.second > maxEle) {
                res = ele.first;
                maxEle = ele.second;
            }
        }
        return res;*/

        int n = nums.size();
        int element = nums[0];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (count == 0) {
                element = nums[i]; 
                count = 1;
            } else {
                if (element == nums[i]) count++;
                else count--;
            }
        }
        return element;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int majorityNum = sol.majorityElement(nums);
    cout << "Majority element: " << majorityNum << endl;
    return 0;
}