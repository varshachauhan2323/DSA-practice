    /*
Question Name: Linked List Cycle II
Platform: LeetCode
Approach: Floyd’s Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }

        if (!fast || !fast->next) return NULL;

        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
