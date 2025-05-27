// Problem: 229. Majority Element II
// URL: https://leetcode.com/problems/majority-element-ii/
// Difficulty: Medium
// Date: 27 May 2025
// Tags: Array, Hash Table, Sorting, Counting
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        /*vector<int> result;
        int n = nums.size() / 3;
        if (n < 1) {
            for (auto num : nums) {
                if (find(result.begin(), result.end(), num) == result.end()) result.push_back(num);
            }
            return result;
        }
        unordered_map<int, int> mpp;
        for (auto num : nums) {
            mpp[num]++;
        }
        for (auto element : mpp) {
            if (element.second > n) result.push_back(element.first);
        }
        return result;*/

        int candidate1 = 0, candidate2 = 1, counter1 = 0, counter2 = 0;
        for (int num : nums) {
            if (candidate1 == num) counter1++;
            else if (candidate2 == num) counter2++;
            else if (counter1 == 0) {
                candidate1 = num;
                counter1 = 1;
            } else if (counter2 == 0) {
                candidate2 = num;
                counter2 = 1;
            }
            else {
                counter1--;
                counter2--;
            }
        }

            counter1 = 0, counter2 = 0;
            for (int num : nums) {
                if (num == candidate1) counter1++;
                if (num == candidate2) counter2++;
            }

            vector<int> result;
            int n = nums.size() / 3;
            if (counter1 > n) result.push_back(candidate1);
            if (counter2 > n && candidate1 != candidate2) result.push_back(candidate2);

            return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    vector<int> result = solution.majorityElement(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}