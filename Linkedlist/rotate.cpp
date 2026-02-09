/*
Question Name: Rotate List
Platform: LeetCode
Approach: Length + Circular Link
Time Complexity: O(n)
Space Complexity: O(1)
Explanation:
- Compute length of list.
- Make list circular.
- Break link at correct position.
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        ListNode* curr = head;
        int len = 1;

        while (curr->next) {
            curr = curr->next;
            len++;
        }

        curr->next = head;
        k = k % len;
        int steps = len - k;

        while (steps--) curr = curr->next;

        head = curr->next;
        curr->next = NULL;

        return head;
    }
};
