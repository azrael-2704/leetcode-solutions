// Problem: 73. Set Matrix Zeroes
// URL: https://leetcode.com/problems/set-matrix-zeroes/
// Difficulty: Medium
// Date: 19 May 2025
// Tags: Array, Hash Table, Matrix
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<pair<int, int>> marker;
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (matrix[row][col] == 0) marker.push_back({row, col});
            }
        }

        for (auto mark : marker) {
            for (int i = 0; i < rows; i++) matrix[i][mark.second] = 0;
            for (int j = 0; j < cols; j++) matrix[mark.first][j] = 0;
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    sol.setZeroes(matrix);

    cout << "Matrix after setting zeroes:" << endl;
    for (const auto& row : matrix) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
