// Problem: 83. Remove Duplicates from Sorted List
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Difficulty: Easy
// Date: 22 May 2025
// Tags: Linked List
// Solution Beats: 100.00%

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->val == temp->next->val) temp->next = temp->next->next;
            else temp = temp->next;
        }
        return head;
    }
};

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution sol;
    ListNode* result = sol.deleteDuplicates(head);

    // Print the result
    while (result != NULL) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}