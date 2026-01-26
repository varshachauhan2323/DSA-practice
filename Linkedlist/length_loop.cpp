/*
Question Name: Length of Cycle in Linked List
Platform: LeetCode
Approach: Floyd’s Cycle Detection
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int countNodesinLoop(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                int cnt = 1;
                fast = fast->next;
                while (fast != slow) {
                    cnt++;
                    fast = fast->next;
                }
                return cnt;
            }
        }
        return 0;
    }
};
