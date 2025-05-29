// Problem: 56. Merge Intervals
// URL: https://leetcode.com/problems/merge-intervals/
// Difficulty: Medium
// Date: 30 May 2025
// Tags: Array, Sorting
// Solution Beats: 56.63%

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(), intervals.end());
            vector<vector<int>> answer;
            int n = intervals.size(), lastIndex = 0;
            answer.push_back(intervals[0]);
            for (int i = 1; i < n; i++) {
                if (intervals[i][0] <= answer[lastIndex][1]) 
                    answer[lastIndex][1] = max(answer[lastIndex][1], intervals[i][1]);
                else {
                    answer.push_back(intervals[i]);
                    lastIndex++;
                }
            }
            return answer;
        }
    };

int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> merged = sol.merge(intervals);
    for (const auto& interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl; // Output: [1, 6] [8, 10] [15, 18]
    return 0;
}