/*
Question Name: Middle of the Linked List
Platform: LeetCode
Approach: Tortoise-Hare (Slow & Fast Pointers)
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // If list is empty or has only one node
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // Slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;

        // Move slow by 1 step and fast by 2 steps
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // When fast reaches end, slow will be at middle
        return slow;
    }
};
