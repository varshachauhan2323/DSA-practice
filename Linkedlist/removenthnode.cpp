/*
Question Name: Remove Nth Node From End of Linked List
Platform: LeetCode
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
Explanation:
- Use two pointers fast and slow.
- Move fast n steps ahead.
- Move both pointers until fast reaches end.
- Delete the nth node from end.
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        for (int i = 0; i < n; i++)
            fast = fast->next;

        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;
        return dummy.next;
    }
};
