/*
Question Name: Reverse Linked List (Recursive)
Platform: LeetCode
Approach: Recursion
Time Complexity: O(n)
Space Complexity: O(n) // recursion stack
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
};
