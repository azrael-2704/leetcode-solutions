#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> result;
        int n = nums.size() - 1;
        int maxEle = nums[n];
        while (n >= 0) {
            if  (nums[n] >= maxEle) result.push_back(nums[n]);
            maxEle = max(maxEle, nums[n]);
            n--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = sol.leaders(nums);
    cout << "Leaders in the array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}