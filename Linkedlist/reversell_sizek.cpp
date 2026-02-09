/*
Question Name: Reverse Nodes in k-Group
Platform: LeetCode
Approach: Recursive / Iterative Reversal
Time Complexity: O(n)
Space Complexity: O(1)
Explanation:
- Reverse first k nodes.
- Recursively reverse remaining list.
- Connect both parts.
*/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        while (curr && count < k) {
            curr = curr->next;
            count++;
        }

        if (count < k) return head;

        curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        count = 0;

        while (curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
