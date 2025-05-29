// Problem: 118. Pascal's Triangle
// URL: https://leetcode.com/problems/pascals-triangle/
// Difficulty: Easy
// Date: 27 May 2025
// Tags: Array, Dynamic Programming
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = answer[i - 1][j - 1] + answer[i - 1][j];
            }
            answer.push_back(row);
        }
        return answer;
    }
};

int main() {
    Solution sol;
    int numRows = 10;

    vector<vector<int>> result = sol.generate(numRows);
    
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}