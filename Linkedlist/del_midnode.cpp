/*
Question Name: Delete the Middle Node of Linked List
Platform: LeetCode
Approach: Slow and Fast Pointer
Time Complexity: O(n)
Space Complexity: O(1)
Explanation:
- Use slow and fast pointers.
- When fast reaches end, slow is at middle.
- Remove the middle node.
*/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;
        return head;
    }
};
