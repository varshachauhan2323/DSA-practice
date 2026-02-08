/*
Question Name: Sort Linked List
Platform: LeetCode
Approach: Merge Sort
Time Complexity: O(n log n)
Space Complexity: O(log n)
Explanation:
- Divide list into halves using slow-fast pointer.
- Recursively sort both halves.
- Merge sorted halves.
*/

class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        temp->next = l1 ? l1 : l2;
        return dummy.next;
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = NULL;

        return merge(sortList(head), sortList(mid));
    }
};
