/*
Problem: 141. Linked List Cycle
Difficulty: Easy
Tags: Linked List, Two Pointers
https://leetcode.com/problems/linked-list-cycle/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) return false;
        if (head->next == nullptr) return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) return true;
        }
        return false;
    }
};

/*
Context: We have been provided a linked list
  We have to find if there is any cycle present in the linked list.

Approach:
  Floyd's Cycle Detection Algorithm (Tortoise and Hare)
    This solution uses two pointers:
      - slow: moves one step at a time
      - fast: moves two steps at a time
  If there is a cycle, the fast pointer will eventually 'lap' the slow pointer, and they will meet inside the loop.
  If there is no cycle, the fast pointer will reach the end of the list (nullptr).

Efficiency:
  Time Complexity: O(n) - In the worst case, the fast pointer travels the entire list, so it's linear.
  Space Complexity: O(1) - No extra data structure are used - just two pointers.
*/
