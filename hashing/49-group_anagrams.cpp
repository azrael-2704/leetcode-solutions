// Problem: 49. Group Anagrams
// URL: https://leetcode.com/problems/group-anagrams/
// Difficulty: Medium
// Date: 19 May 2025
// Tags: Array, Hash Table, String, Sorting
// Solution Beats: 80.00%

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> mpp;
        int n = strs.size();
        for (auto i : strs) {
            string current = i;
            sort(current.begin(), current.end());
            mpp[current].push_back(i);
        }
        for (auto i : mpp) {
            result.push_back(i.second);
        }
        return result;
    }
};

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    Solution sol;
    vector<vector<string>> result = sol.groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : result) {
        for (const auto& str : group) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}