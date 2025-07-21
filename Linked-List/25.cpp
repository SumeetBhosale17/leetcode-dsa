/*
Problem 25: Reverse Nodes In K Groups
Difficulty: Hard
Tags: Linked List, Recursion
https://leetcode.com/problems/reverse-nodes-in-k-group/
*/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k <= 1) return head;
        
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr && count < k) {
            temp = temp->next;
            count++;
        }
        
        if (count == k) {
            temp = head;
            ListNode* rev = nullptr;
            for (int i = 1; i <= k; i++) {
                ListNode* next = temp->next;
                temp->next = rev;
                rev = temp;
                temp = next;
            }
            head->next = reverseKGroup(temp, k);
            return rev;
        } else {
            return head;
        }
    }
};
